/***********************************************************************
created 12/23/2021 - c++ udemy online course
contents:            (C) : challenge
 PROGRAM NAME:____________________________________TOPIC:__________________
 * starter                                        (default for copying)
 * c++-style string practice                      c++-style strings
 * c-style string practice                        c-style strings
 * full menu                                      looping (all)
 * histogram                                      nested loops
 * nested loops practice                          nested loops
 * menu                                           do while loops
 * while loop practice                            while loops
 * range for loop practice                        range based for loops
 * for loop practice                              for loops
 * min max                                        conditional operator
 * grade v2                                       switch statement
 * grade v1                                       if else
 * provide change (C)                             operators
 * vectors practice (C)                           vectors
 * carpet cleaner (C)                             constants / variables
 * room area (C)                                  variables
 * favorite number (C)                            I/O

NOTE: (C) = challenge, else is in class practice examples
NOTE2: most recent to least recent going down the list
**************************************************************************
*/
// STARTER--------------------------------------------------------------
/*
 #include <iostream>

 using namespace std;

 int main(){
     return 0;
 }
 */

//C++-STYLE STRING PRACTICE----------------------------------------------

//class example ch10
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX

    cout<<"INITIALIZATIONS: "<<endl;
    cout<<"s0: "<<s0<<endl;
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<"s3: "<<s3<<endl;
    cout<<"s4: "<<s4<<endl;
    cout<<"s5: "<<s5<<endl;
    cout<<"s6: "<<s6<<endl;
    cout<<"s7: "<<s7<<endl;

    cout<<"\nCOMPARISONS: "<<endl;
    cout<<boolalpha;
    cout<<s1<<" == "<<s5<<" : "<<(s1 == s5)<<endl; //true
    cout<<s1<<" == "<<s2<<" : "<<(s1 == s2)<<endl; //false
    cout<<s1<<" != "<<s2<<" : "<<(s1 != s2)<<endl; //true
    cout<<s1<<" < "<<s2<<" : "<<(s1 < s2)<<endl; //true
    cout<<s2<<" > "<<s1<<" : "<<(s2 > s1)<<endl; //true
    cout<<s4<<" < "<<s5<<" : "<<(s4<s5)<<endl; //false
    cout<<s1<<" == "<<"Apple"<<" : "<<(s1=="Apple")<<endl; //true

    cout<<"\nASSIGNMENTS: "<<endl;
    s1 = "Watermelon";
    cout<<"s1 is now: "<<s1<<endl; //watermelon
    s2 = s1;
    cout<<"s2 is now: "<<s2<<endl; //watermelon
    s3 = "Frank";
    cout<<"s3 is now: "<<s3<<endl; //frank
    s3[0] = 'C';
    cout<<"s3 change first letter: "<<s3<<endl; //crank
    s3.at(0) = 'P';
    cout<<"s3 change first letter again: "<<s3<<endl; //prank

    cout<<"\nCONCATENATION: "<<endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 +" juice"; //apple and banana juice
    cout<<"s3 is now: "<<s3<<endl;

    cout<<"\nLOOPING: "<<endl;
    s1 = "Apple";
    for (size_t i {0}; i<s1.length(); i++)
        cout<<s1.at(i);
    cout<<endl;
    for (char c: s1)
        cout<<c;
    cout<<endl;

    cout<<"\nSUBSTRING: "<<endl;
    s1 = "This is a test";
    cout<<s1.substr(0,4)<<endl; //This
    cout<<s1.substr(5,2)<<endl; //is
    cout<<s1.substr(10,4)<<endl; //test

    cout<<"\nERASE: "<<endl;
    s1 = "This is a test";
    s1.erase(0,5); //erase This
    cout<<"s1 is now: "<<s1<<endl;

    cout<<"\nGETLINE: "<<endl;
    string full_name {};
    cout<<"Enter your full name:";
    getline(cin, full_name);
    cout<<"\nYour full name is "<<full_name<<endl;

    cout<<"\nFIND: "<<endl;
    s1 = "The secret word is Boo";
    string word;
    cout<<"Enter the word to find:";
    cin>>word;
    size_t position = s1.find(word);
    if (position != string::npos)
        cout<<"Found "<<word<<" at position "<<position<<endl;
    else
        cout<<"Sorry, "<<word<<" not found"<<endl;

    return 0;
}


// C-STYLE STRING PRACTICE------------------------------------------------
/*
//class example ch10
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char full_name1 [50] {};
    char temp[50] {};

    cout<<"Enter your first name:";
    cin>>first_name;
    cout<<"Enter your last name:";
    cin>>last_name;

    cout<<"Hello "<<first_name
    <<"! Your first name has "<<strlen(first_name)<<" characters"
    <<"\nand your last name has "<<strlen(last_name)<<" characters.";
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout<<"\nand your full name is "<<full_name;
    cout<<"\n";

    cout<<"Enter your full name:";
    cin.getline(full_name1, 50);
    cout<<"\nYour full name is "<<full_name1<<endl;
    strcpy(temp, full_name1);
    if(strcmp(temp, full_name1)==0)
        cout<<temp<<" and "<<full_name1<<" are the same";
    else
        cout<<temp<<" and "<<full_name1<<" are different";
    for (size_t i{0}; i<strlen(full_name1);i++){
        if (isalpha(full_name1[i])){
            full_name1[i] = toupper(full_name1[i]);
        }
    }
    cout<<"\nbut ";
    if(strcmp(temp, full_name1)==0)
        cout<<temp<<" and "<<full_name1<<" are the same";
    else
        cout<<temp<<" and "<<full_name1<<" are different";


    return 0;
}
 */

// FULL MENU-------------------------------------------------------------
/*
//challenge ch9
#include <iostream>
#include <vector>

using namespace std;

int main(){
    char selection {};
    vector <int> vec {};

    do {
        cout<<"---------------------------------";
        cout<<"\nMENU:";
        cout<<"\nP - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean"<<endl;
        cout<<"S - Display smallest number"<<endl;
        cout<<"L - Display largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"\nEnter your selection:";
        cin>>selection;
        switch (selection){
            case 'p':
            case 'P':
            {
                cout<<"\nP - Print numbers:"<<endl;
                if (vec.size() > 0){
                    for (auto val: vec){
                        cout<<val<<endl;
                    }
                } else{
                    cout<<"No numbers found"<<endl;
                }

                break;
            }
            case 'a':
            case 'A':
            {
                int num {};
                cout<<"\nA - Add a number:"<<endl;
                cout<<"Input an integer:";
                cin>>num;
                vec.push_back(num);
                cout<<num<<" added."<<endl;
                break;
            }
            case 'm':
            case 'M':
            {
                double sum {};
                double average {};
                cout<<"\nM - Display mean:"<<endl;
                if (vec.size() > 0) {
                    for (auto val: vec){
                        sum += val;
                    }
                    average = sum / vec.size();
                    cout<<average<<endl;
                } else{
                    cout<<"No numbers found"<<endl;
                }
                break;
            }
            case 's':
            case 'S':
            {
                int min (9999999);
                cout<<"\nS - Display smallest number:"<<endl;
                if (vec.size() > 0){
                    for (auto val: vec) {
                        if (val < min)
                            min = val;
                    }
                    cout<<min<<endl;
                } else{
                    cout<<"No numbers found"<<endl;
                }
                break;
            }
            case 'l':
            case 'L':
            {
                int max (0);
                cout<<"\nL - Display largest number:"<<endl;
                if (vec.size() > 0){
                    for (auto val: vec) {
                        if (val > max)
                            max = val;
                    }
                    cout<<max<<endl;
                } else {
                    cout<<"No numbers found"<<endl;
                }
                break;
            }
            case 'q':
            case 'Q':
                cout<<"Goodbye"; break;
            default: cout<<"Invalid choice, try again."<<endl;
        }
    } while (selection != 'q' && selection != 'Q');

    return 0;
}
 */

// HISTOGRAM--------------------------------------------------------------
/*
//class example ch9
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num_items (0);
    vector <int> data {};

    cout<<"How many items of data do you have?";
    cin>>num_items; // # times to iterate

    for (int i (1); i <= num_items; i++){
        int data_item (0);
        cout<<"Enter data item "<<i<<" :";
        cin>>data_item;
        data.push_back(data_item);
    } //adds each item to the vector

    cout<<"\nDisplaying histogram:\n";
    for (auto val: data){
        for (int i(1); i<=val; i++){
            cout<<'*'; //prints the number of * that is the value
        }
        cout<<endl; //space in between values
    }

    return 0;
}
 */

// NESTED LOOPS PRACTICE-------------------------------------------------
/*
//class example ch9
#include <iostream>
#include <vector>

using namespace std;

int main(){

    for (int num (1); num <=10; num++){
        for (int num1 (1); num1 <=10; num1++){
            cout<<num<<"*"<<num1<<"="<<num*num1;
            cout<<((num1 *1== 10) ? "\n\n" : "   ");
        } //10x10 multiplication table
    }

    vector<vector<int>> vector_2d{
            {1,2,3}, {10,20,30,40}, {100,200,300,400,500}
    };
    for (const auto& vec: vector_2d) {
        for (auto val: vec) {
            cout << val << " ";
        } // print out all values of a multidimensional vector easily
        cout << endl;
    }
    return 0;
}
 */

// MENU------------------------------------------------------------------
/*
//class example ch9
#include <iostream>

using namespace std;

int main(){
    char selection {};
    do {
        cout<<"\n---------------------------------";
        cout<<"\nMENU:";
        cout<<"\n1. do this"<<endl;
        cout<<"2. do that"<<endl;
        cout<<"3. do something else"<<endl;
        cout<<"Q. quit"<<endl;
        cout<<"\nEnter your selection:";
        cin>>selection;
        switch (selection){
            case '1': cout<<"you selected 1: do this"; break;
            case '2': cout<<"you selected 2: do that"; break;
            case '3': cout<<"you selected 3: do something else"; break;
            case 'q':
            case 'Q':
                cout<<"goodbye"; break;
            default: cout<<"invalid choice";
        }
    } while (selection != 'q' && selection != 'Q'); //continue until q
    return 0;
}
 */

//WHILE LOOP PRACTICE----------------------------------------------------
/*
//class example ch9
#include <iostream>

using namespace std;

int main(){

    int num (0);
    cout<<"enter a positive integer - start the countdown:";
    cin>>num;
    while (num > 0){
        cout<<num<<endl;
        --num; //countdown from the entered number to 0
    }

    int num1 (0);
    cout<<"enter a positive integer to count up to:";
    cin>>num1;
    int i (1);
    while (num >= i){
        cout<<i<<endl;
        i++; //input a target and count up until it is reached
    }

    int num2 (0);
    cout<<"enter an integer less than 100";
    cin>>num2;
    while (num2 >= 100) {
        cout<<"enter an integer less than 100";
        cin>>num2; //repeat until the number is less than 100
    }
    cout<<"thanks";

    bool done (false);
    int num3 (0);
    while (!done){
        cout<<"enter an integer between 1 and 5";
        cin>>num3;
        if (num3 <= 1 || num3 >= 5)
            cout<<"out of range, try again";
        else{
            cout<<"thanks";
            done = true;
        }//uses a bool as a flag to iterate until the right value entered
    }

    return 0;
}
 */

//RANGE FOR LOOP PRACTICE-------------------------------------------------
/*
//class example ch9
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    int scores[] {10,20,30};
    for (auto score : scores)
        cout<<score<<endl; //prints all scores

    vector <double> temps {87.9, 77.9, 80.0, 72.5};
    double average_temp (0);
    double total (0);
    for (auto temp : temps)
        total += temp;
    if (temps.size() != 0)
        average_temp = total/temps.size();
    cout<<fixed<<setprecision(1);
    cout<<"avg temp is "<<average_temp<<endl; //finds and prints average

    for (auto val: {1,2,3,4,5})
        cout<<val<<endl;

    for (auto c: "this is a test")
        if (c == ' ')
            cout<<"\t";
        else
            cout<<c; //prints replacing space with tabs

    return 0;
}
*/

//FOR LOOP PRACTICE------------------------------------------------------
/*
//class example ch9
#include <iostream>
#include <vector>

using namespace std;

int main(){

    for (int i (1); i <= 10; i++){
        cout<< i<<endl; // count up to 10
    }

    for (int i (1); i <= 10; i+=2){
        cout<<i<<endl; // count up to 10 by 2s
    }

    for (int i (10); i > 0; i--){
        cout<<i<<endl; // count down from 10
    }

    for (int i (10); i <= 100; i+=10){
        if (i % 15 == 0){
            cout<<i<<endl; //print i if divisible by 15, numbers under 100
        }
    }

    for (int i (1), j (5); i <= 5; i++, j++){
        cout<<i<<"+"<<j<<"="<<i+j<<endl;
        // print i+j where both i and j increase by 1 each iteration
    }

    for (int i (1); i <= 100; i++){
        cout<<i;
        if (i % 10 == 0) //10 across
            cout<<endl;
        else
            cout<<" ";
        //prints all i 1-100 in table format 10x10
        // see below for better version
    }

    for (int i (1); i <= 100; i++){
        cout<<i;
        cout<<((i % 10 == 0) ? "\n" : " ");
        //prints all i 1-100 in table format 10x10
        //see ^ for how it works a different way
    }

    vector <int> nums {10,20,30,40,50};
    for (unsigned int i (0); i < nums.size(); i++){
        cout<<nums[i]<<endl; // while in the vector range print i
    }

    return 0;
}
*/

// MIN MAX---------------------------------------------------------------
/*
//class example ch9
#include <iostream>

using namespace std;

int main(){
    int num1 (0);
    int num2 (0);

    cout<<"enter 2 integers separated by a space: ";
    cin>>num1>>num2;

    if (num1 != num2){
        cout<<"\nlargest: "<<((num1 > num2) ? num1 : num2) <<endl;
        cout<<"smallest: "<<((num1 < num2) ? num1 : num2) <<endl;
    }
    else{
        cout<<"\nthe numbers are the same";
        cout<<endl;
    }
    return 0;
}
 */

// GRADE v2--------------------------------------------------------------
/*
//class example ch9
#include <iostream>

using namespace std;

int main(){
    char letter_grade ('F');

    cout<<"Enter the letter grade you want on the exam: ";
    cin>>letter_grade;

    switch (letter_grade){
        case 'a':
        case 'A':
            cout<<"you need 90 or above, study hard!"; break;
        case 'b':
        case 'B':
            cout<<"you need 80-89, go study!"; break;
        case 'c':
        case 'C':
            cout<<"you need a 70-79 to be average."; break;
        case 'd':
        case 'D':
            cout<<"strive for better you only need 60-69."; break;
        case 'f':
        case 'F':
        {
            char confirm;
            cout<<"are you sure (y/n): ";
            cin>>confirm;
            if (confirm == 'y' || confirm == 'Y'){
                cout<<"ok then i guess dont study";
                break;
            }
            else if (confirm == 'n' || confirm == 'N'){
                cout<<"thought so, go study";
                break;
            }
        }
        default:
            cout<<"not a valid grade";
    }

    return 0;
}
 */

// GRADE v1--------------------------------------------------------------
/*
//class example ch9
 #include <iostream>

 using namespace std;

 int main(){
     int score;
     char letter_grade ('F');

     cout<<"Enter exam score (0-100): ";
     cin>>score;

     if (score >= 0 && score <= 100) {
         if (score >= 90){
             letter_grade = 'A';
         }
         else if (score >= 80){
             letter_grade = 'B';
         }
         else if (score >= 70){
             letter_grade = 'C';
         }
         else if (score >= 60){
             letter_grade = 'D';
         }
         else{
             letter_grade = 'F';
         }
         cout<<"Your grade is "<<letter_grade;
         if (letter_grade == 'F'){
             cout<<"\nSorry you must repeat the class";
         }
         else{
             cout<<"\nCongrats you pass";
         }
     }

     return 0;
 }
*/

// PROVIDE CHANGE--------------------------------------------------------
/*
//challenge ch8
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int cents (0);
    int cents_left;
    double x;
    vector <int> change {0,0,0,0,0};
    // vector index key: 0=dollar 1=quarter 2=dime 3=nickel 4=penny

    cout<<"Enter an amount in cents: ";
    cin>>cents;
    cents_left = cents;
    if (cents_left >= 100){
        x = cents_left / 100;
        change.at(0) += round(x);
        //^sets dollars value to chance /100 rounded
        cents_left = (cents_left % 100);
        //6sets amount left to what is left over once 100 is divided out
    }
    if (cents_left >= 25){
        x = cents_left / 25;
        change.at(1) += round(x);
        cents_left = (cents_left % 25);
    }
    if (cents_left >= 10){
        x = cents_left / 10;
        change.at(2) += round(x);
        cents_left = (cents_left % 10);
    }
    if (cents_left >= 5){
        x = cents_left / 5;
        change.at(3) += round(x);
        cents_left = (cents_left % 5);
    }
    if (cents_left >= 0){
        change.at(4) += (cents_left);
    }

    cout<<"\nChange for "<<cents<<" cents:"
    <<"\nDollars: "<<change.at(0)
    <<"\nQuarters: "<<change.at(1)
    <<"\nDimes: "<<change.at(2)
    <<"\nNickels: "<<change.at(3)
    <<"\nPennies: "<<change.at(4);

    return 0;
    //I saw the solution I made it way too complicated
    // haha good practice though :)
}
 */

// VECTORS PRACTICE------------------------------------------------------
/*
//challenge ch7
# include <iostream>
# include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector <vector<int>> vector_2d;

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"Vector 1 contains: "<<vector1.at(0)<<", "<<vector1.at(1)<<endl;
    cout<<"length: "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"\nVector 2 contains: "<<vector2.at(0)<<", "<<vector2.at(1)<<endl;
    cout<<"length: "<<vector2.size()<<endl;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"\nVector 2d contains: "<<endl;
    cout<<vector_2d.at(0).at(0)<<", "<<vector_2d.at(0).at(1)
    <<", "<<vector_2d.at(1).at(0)<<", "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0) = 1000;
    cout<<"\nAfter change, vector 2d now contains: "<<endl;
    cout<<vector_2d.at(0).at(0)<<", "<<vector_2d.at(0).at(1)
        <<", "<<vector_2d.at(1).at(0)<<", "<<vector_2d.at(1).at(1)<<endl;
    cout<<"\nAfter change, vector 1 now contains: "<<vector1.at(0)<<", "<<vector1.at(1)<<endl;

    return 0;
}
*/

// CARPET CLEANER-------------------------------------------------------
/*
//challenge ch6
 # include <iostream>

using namespace std;

int main(){
    int number_small (0);
    int number_large (0);
    const double price_small (25);
    const double price_large (35);
    const double sales_tax (0.06);
    const int expiration (30);

    cout<<"Hello welcome to the carpet cleaning service :)";
    cout<<"\nHow many small rooms would you like cleaned?";
    cin>>number_small;
    cout<<"How many large rooms would you like cleaned?";
    cin>>number_large;

    cout<<"\nEstimate for carpet cleaning service:"<<endl;
    cout<<"Number of small rooms: "<<number_small<<endl;
    cout<<"Number of large rooms: "<<number_large<<endl;
    cout<<"Price per small room: $"<<price_small<<endl;
    cout<<"Price per large room: $"<<price_large<<endl;
    double x = (price_large*number_large) + (price_small*number_small);
    cout<<"Cost: $"<<x<<endl;
    cout<<"Tax: $"<<x*sales_tax<<endl;
    cout<<"========================================="<<endl;
    cout<<"Total estimate: $"<< (x) + (x*sales_tax)<<endl;
    cout<<"This estimate is valid for "<<expiration<<" days."<<endl;

    return 0;
}
*/

// ROOM AREA-------------------------------------------------------------
/*
//challenge ch5
 # include <iostream>

using namespace std;

int main(){
    int room_width (0);
    int room_length (0);

    cout<<"Enter the width of the room:";
    cin >> room_width;
    cout<<"Enter the length of the room:";
    cin >> room_length;
    cout<<"The area of the room is "<<room_width*room_length<<" square feet.";

    return 0;
}
 */

// FAVORITE NUMBER------------------------------------------------------
/*
//challenge ch4
 # include <iostream>

int main(){
    int favorite_number;

    std::cout<<"Enter your favorite number between 1 and 100:";
    std::cin>>favorite_number;
    std::cout<<"Amazing!!! That's my favorite number too!"<<std::endl;
    std::cout<<"No really!!! " << favorite_number << " is my favorite number!"<<std::endl;

    return 0;
}
*/
