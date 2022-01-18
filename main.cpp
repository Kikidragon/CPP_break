/***********************************************************************
created 12/23/2021 - c++ udemy online course - Claire DeVlieger
contents:            (C) : challenge
 PROGRAM NAME:____________________________________TOPIC:__________________
 * starter                                        (default for copying)
 * next
 * error handling class practice                  error handling
 * error handling function practice               error handling
 * catch 2 exceptions                             error handling
 * divide by zero                                 error handling
 * movie tracker (C)                              classes - all
 * external file classes                          oop - classes
 * move constructors                              oop - classes
 * constructor defaults                           oop - classes
 * constructor destructor practice                oop - classes
 * class defining                                 oop - classes
 * class basics                                   oop - classes
 * array pointers (C)                             pointers
 * pointers in functions 2                        pointers
 * pointers in functions                          pointers
 * pointer arithmetic                             pointers
 * memory allocation                              memory / array pointers
 * pointer dereferencing                          pointers
 * pointers practice                              pointers
 * functions full menu (C)                        functions (all)
 * recursion practice                             functions recursion
 * pass by ref practice                           functions pass by ref
 * array functions                                functions with arrays
 * print overload                                 function overload
 * calculate cost                                 function arguments
 * function practice                              functions
 * letter pyramid (A)                             strings / loops
 * encryption cypher (C)                          strings (all)
 * c++-style string practice                      c++-style strings
 * c-style string practice                        c-style strings
 * full menu (C)                                  looping (all)
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

NOTE: (C) = challenge, (A) = assignment, else in class practice examples
NOTE2: most recent to least recent going down the list
**************************************************************************
*/
// STARTER--------------------------------------------------------------
/*
 #include <iostream>
 #include <vector>
 #include <string>

 using namespace std;

 int main(){
     cout<<"Hello World!"<<endl;
     return 0;
 }
 */

//next
//
//class example
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    cout<<"Hello World!"<<endl;
    return 0;
}

// ERROR HANDLING CLASS PRACTICE----------------------------------------
/*
//class example ch18
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class DivideByZeroException{};
class NegativeValueException{};

double calculate_mpg(int miles, int gallons){
    if (gallons == 0)
        throw DivideByZeroException();
    if (miles <0 || gallons <0)
        throw NegativeValueException();
    return static_cast<double>(miles)/gallons;
}

int main(){
    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout<<"enter miles driven:";
    cin>>miles;
    cout<<"enter gallons used:";
    cin>>gallons;

    try{
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout<<"result:"<<miles_per_gallon<<endl;
    } catch (const DivideByZeroException &ex){
        cerr<<"sorry, cant divide by zero"<<endl;
    } catch (const NegativeValueException &ex){
        cerr<<"sorry, cant have negative parameters"<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
*/

// ERROR HANDLING FUNCTION PRACTICE-------------------------------------
/*
//class example ch18
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void func_c(){
    cout<<"starting func_c"<<endl;
    throw 100;
    cout<<"ending func_c"<<endl;
}
void func_b(){
    cout<<"starting func_b"<<endl;
    try{
        func_c();
    }catch (int &ex) {
        cout<<"caught error in main"<<endl;
    }
    cout<<"ending func_b"<<endl;
}
void func_a(){
    cout<<"starting func_a"<<endl;
    func_b();
    cout<<"ending func_a"<<endl;
}
int main(){
    cout<<"starting main"<<endl;
    try{
        func_a();
    } catch (int &ex){
        cout<<"caught error in main"<<endl;
    }
    cout<<"finishing main"<<endl;
    return 0;
}
 */

// CATCH 2 EXCEPTIONS---------------------------------------------------
/*
//class example ch18
#include <iostream>
#include <vector>
#include <string>

using namespace std;

double calculate_mpg(int miles, int gallons){
    if (gallons == 0)
        throw 0;
    if (miles <0 || gallons <0)
        throw string("negative value error");
    return static_cast<double>(miles)/gallons;
}

int main(){
    int miles {};
    int gallons {};
    double miles_per_gallon;

    cout<<"enter miles driven:";
    cin>>miles;
    cout<<"enter gallons used:";
    cin>>gallons;

    try{
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout<<"result"<<miles_per_gallon<<endl;
    } catch (int &ex){ //reference to throw 0
        cerr<<"tried to divide by zero"<<endl;
    } catch (string &ex){ //reference to throw string
        cerr<<ex<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
*/

// DIVIDE BY ZERO--------------------------------------------------------
/*
//class example ch18
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int miles {};
    int gallons {};
    double miles_per_gallon;

    cout<<"enter miles driven:";
    cin>>miles;
    cout<<"enter gallons used:";
    cin>>gallons;

    try{
        if (gallons==0)
        throw 0;
        miles_per_gallon = static_cast<double>(miles)/gallons;
        cout<<"result:"<<miles_per_gallon<<endl;
    } catch (int &ex){
        cerr<<"sorry you cant divide by zero"<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
*/

// MOVIE TRACKER--------------------------------------------------------
/*
//challenge ch13
//from solution i didnt get it
//it donesnt work i dont know why fix it later (157 video)
#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name){
    if (movies.increment_watched(name)){
        std::cout<<name<<" watch incremented"<<std::endl;
    }else{
        std::cout<<name<<" not found"<<std::endl;
    }
}
void add_movie(Movies &movies, std::string name, std::string rating, int watched){
    if (movies.add_movie(name,rating,watched)){
        std::cout<<name<<" added"<<std::endl;
    }else{
        std::cout<<name<<" already exists"<<std::endl;
    }
}

int main(){
    Movies my_movies;
    my_movies.display();
    string name {};
    string rating {};
    int watched {};

    char input {};
    do{
        cout<<"\nmenu:"<<endl;
        cout<<"add movie: a"<<endl;
        cout<<"view list: v"<<endl;
        cout<<"increment times watched: t"<<endl;
        cout<<"quit: q"<<endl;
        cout<<"choice:";
        cin>>input;
        cout<<'\n';
        switch (input){
            case 'a':
            case 'A':
                cout<<"enter name of movie, rating, and times watched (separated by a space):";
                cin>>name, rating, watched;
                add_movie(my_movies, name, rating, watched);
                break;
            case 'v':
            case 'V':
                cout<<"displaying movies: "<<endl;
                my_movies.display();
                break;
            case 't':
            case 'T':
                cout<<"enter title of movie:";
                cin>>name;
                increment_watched(my_movies, name);
                break;
            case 'q':
            case 'Q':
                cout<<"goodbye";
                break;
            default:
                cout<<"invalid input please input again"<<endl;
        }
    }while (input != 'q' && input != 'Q');

    return 0;
}
 */

// EXTERNAL FILE CLASSES------------------------------------------------
/*
//class example ch13
//includes files Player.cpp and Player.h
#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

using namespace std;

void display_active_players(){
    cout<<"Active players: "<<Player::get_num_players()<<endl;
}

int main(){
    display_active_players(); //0
    Player kiki{"Kiki"};
    display_active_players(); //1
    {
        Player hero{"Hero"};
        display_active_players(); //2
    }
    display_active_players(); //1
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players(); //2
    delete enemy;
    display_active_players();//1
    return 0;
}
 */

// MOVE CONSTRUCTORS----------------------------------------------------
/*
//class example ch13
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    Move(int d); //constructor
    Move(const Move &source); //copy constructor
    Move(Move &&source) noexcept; //move constructor
    ~Move(); //destructor
};
//normal
Move::Move(int d) {
    data = new int;
    *data = d;
    cout<<"constructor for "<<d<< endl;
}
//copy
Move::Move(const Move &source)
:Move (*source.data){
    cout<<"copy constructor deep copy for "<<*data<<endl;
}
//move
Move::Move(Move &&source) noexcept
:data(source.data){
    source.data = nullptr;
    cout<<"move constructor for "<<*data<<endl;
}
Move::~Move(){
    if (data != nullptr){
        cout<<"destructor for "<<*data<<endl;
    }else{
        cout<<"destructor for nullptr"<<endl;
    }
    delete data;
}

int main(){
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    return 0;
}
 */

// CONSTRUCTOR DEFAULTS-------------------------------------------------
/*
//class example ch13
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};
Player::Player(std::string name_val, int health_val, int xp_val)
:name{name_val}, health{health_val}, xp{xp_val}{
    cout<<"constructor called"<<endl;
    cout<<name<<' '<<health<<' '<<xp<<endl;
}

int main(){
    Player empty;
    Player kiki {"Kiki"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
    return 0;
}
*/

// CONSTRUCTOR DESTRUCTOR PRACTICE--------------------------------------
/*
//class example ch13
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name1){
        name = name1;
    }
    //overloaded constructors
    Player(){
        cout<<"no args called"<<endl;
    }
    Player(std::string name){
        cout<<"string arg called"<<endl;
    }
    Player(std::string, int healt, int xp){
        cout<<"3 arg called"<<endl;
    }
    ~Player(){
        cout<<"destructor called for "<<name<<endl;
    }
};

int main(){
    {
        Player slayer;
        slayer.set_name("slayer");
    }
    {
        Player kiki;
        kiki.set_name("kiki");
        Player hero;
        hero.set_name("hero");
        Player villain("villain",100,12);
        villain.set_name("villain");
    }
    Player *enemy = new Player;
    enemy->set_name("enemy");
    Player *level_boss = new Player("level boss", 1000, 300);
    level_boss->set_name("level boss");
    delete enemy;
    delete level_boss;
    return 0;
}
*/

// CLASS DEFINING-------------------------------------------------------
/*
//class example ch13
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account{
private:
    string name;
    double balance;
public:
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    //defined below | , can be put in another file
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};
void Account::set_name(string n){
    name = n;
}
string Account::get_name() {
    return name;
}
bool Account::deposit(double amount) {
    balance += amount;
    return true;
}
bool Account::withdraw(double amount) {
    if (balance-amount >=0){
        balance -= amount;
        return true;
    }else{
        return false;
    }
}

int main(){
    Account kiki_account;
    kiki_account.set_name("Kiki's account");
    kiki_account.set_balance(1000.0);
    if (kiki_account.deposit(200.0))
        cout<<"deposit ok"<<endl;
    else
        cout<<"deposit not allowed"<<endl;
    if (kiki_account.withdraw(500.0))
        cout<<"withdraw ok"<<endl;
    else
        cout<<"not sufficient funds"<<endl;
    if (kiki_account.withdraw(1500.0))
        cout<<"withdraw ok"<<endl;
    else
        cout<<"not sufficient funds"<<endl;

    return 0;
}
 */

// CLASS BASICS---------------------------------------------------------
/*
//class example ch13
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public:
    //attributes
    string name {"Player"};
    int health {0};
    int xp {3};
    //methods
    void talk(string text) {cout<<name<<" says "<<text<<endl;}
    bool is_dead();
};
class Account{
public:
    //attributes
    string name {"Account"};
    double balance {0.0};
    //methods
    bool deposit(double bal) {balance += bal; cout<<"deposit"<<endl;}
    bool withdraw(double bal) {balance -= bal; cout<<"withdraw"<<endl;}
};

int main(){
    Player kiki;
    kiki.name = "kiki";
    kiki.health = 100;
    kiki.xp = 12;
    kiki.talk("hello");

    Player *enemy = new Player;
    (*enemy).name = "enemy";
    enemy->health = 100;
    enemy->xp = 15;
    enemy->talk("die die die");

    Account kiki_account;
    kiki_account.balance = 5000.0;
    kiki_account.deposit(1000.0);
    kiki_account.withdraw(500.0);

    return 0;
}
 */

// ARRAY POINTERS-------------------------------------------------------
/*
//challenge ch12
//from solution i didnt get it
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int * apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2){
    int *new_array {};
    new_array = new int[size1 * size2];
    int position (0);
    for (size_t i(0); i < size2; i++){
        for (size_t j(0); j < size1; j++){
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}
void print(const int *const arr, size_t size){
    cout<<"[ ";
    for (size_t i(0); i<size; i++)
        cout<<arr[i]<<' ';
    cout<<" ]";
    cout<<endl;
}

int main(){
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout<<"Array 1: ";
    print(array1, 5);
    cout<<"Array 2: ";
    print(array2, 3);
    int *results = apply_all(array1, 5, array2, 3);
    cout<<"Result: ";
    print(results, 15);
    return 0;
}
 */

// POINTERS IN FUNCTIONS 2----------------------------------------------
/*
//class example ch12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *create_array(size_t, int);
void display(const int *, size_t);

int *create_array(size_t size, int init_value = 0){
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i(0); i< size; i++)
        *(new_storage + i) = init_value; //set array to be size*int_value
    return new_storage;
}
void display(const int *const array, size_t size){
    for (size_t i(0); i < size; i++)
        cout<<array[i]<<' '; //print the array
    cout<<endl;
}

int main(){
    int *my_array {nullptr};
    size_t size;
    int init_value {};

    cout<<"how many integers to allocate:";
    cin>>size;
    cout<<"what value would you like to initalize to:";
    cin>>init_value;
    my_array = create_array(size, init_value);
    cout<<"\n";
    display(my_array, size);
    delete [] my_array;

    return 0;
}
*/

// POINTERS IN FUNCTIONS------------------------------------------------
/*
//class example ch12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap(int, int);
void display(int, int);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int *array, int sentinel){
    while (*array != sentinel)
        cout<<*array++<<' ';
    cout<<endl;
}

int main(){
    int x {100};
    int y {200};
    cout<<"x: "<<x<<endl; //100
    cout<<"y: "<<y<<endl; //200
    swap(&x, &y);
    cout<<"x: "<<x<<endl; //200
    cout<<"y: "<<y<<endl; //100

    int scores[] {100,98,97, 85,-1};
    display(scores, -1);

    return 0;
}
*/

// POINTER ARITHMETIC---------------------------------------------------
/*
//class example ch12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int scores[] {100,95,89,68,-1};
    int *score_ptr{scores};

    while (*score_ptr != -1){
        cout<<*score_ptr<<' ';
        score_ptr++; //points to next value in scores
    }
    cout<<endl;
    score_ptr = scores;
    while (*score_ptr != -1) {
        cout << *score_ptr++ << ' '; //same as ^ loop
    }
    cout<<'\n';

    string s1 {"frank"};
    string s2 {"frank"};
    string s3 {"james"};
    string *p1 {&s1}; //frank
    string *p2 {&s2}; //frank
    string *p3 {&s1}; //frank
    cout<<boolalpha;
    cout<<p1<<"=="<<*p2<<":"<<(*p1 == *p2)<<endl; //false
    cout<<p1<<"=="<<*p3<<":"<<(*p1 == *p3)<<endl; //true
    cout<<*p1<<"=="<<*p2<<":"<<(*p1 == *p2)<<endl; //true
    cout<<*p1<<"=="<<*p3<<":"<<(*p1 == *p3)<<endl; //true
    p3 = &s3; //point to james
    cout<<*p1<<"=="<<*p3<<":"<<(*p1 == *p3)<<endl; //false

    char name[] {"frank"};
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    char_ptr1 = &name[0]; //f
    char_ptr2 = &name[3]; //n
    cout<<"\nin "<<name<<", "<<*char_ptr2<<" is "
    <<(char_ptr2-char_ptr1)<<" characters from "<<*char_ptr1<<endl;

    return 0;
}
*/

// MEMORY ALLOCATION----------------------------------------------------
/*
//class example ch12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    size_t size(0);
    double *temp_ptr {nullptr};

    cout<<"how many temps:";
    cin>>size;
    temp_ptr = new double[size]; //allocate pointers to heap
    cout<<temp_ptr<<endl;
    delete [] temp_ptr; //remove allocation

    int scores[] {100,95,89};
    cout<<"\nvalue of scores: "<<scores<<endl;
    int *score_ptr {scores};
    cout<<"value of score_ptr: "<<score_ptr<<endl;
    cout<<"\nARRAY SUBSCRIPT NOTATION:"<<endl;
    cout<<scores[0]<<' ';
    cout<<scores[1]<<' ';
    cout<<scores[2]<<' ';
    cout<<"\nPOINTER SUBSCRIPT NOTATION:"<<endl;
    cout<<score_ptr[0]<<' ';
    cout<<score_ptr[1]<<' ';
    cout<<score_ptr[2]<<' ';
    cout<<"\nPOINTER OFFSET NOTATION:"<<endl;
    cout<<*score_ptr<<' ';
    cout<<*(score_ptr + 1)<<' ';
    cout<<*(score_ptr + 2)<<' ';
    cout<<"\nARRAY OFFSET NOTATION:"<<endl;
    cout<<*scores<<' ';
    cout<<*(scores + 1)<<' ';
    cout<<*(scores + 2)<<' ';

    return 0;
}
*/

// POINTERS DEREFERENCING-----------------------------------------------
/*
//class example ch12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int score (100);
    int *score_ptr {&score};
    cout<<*score_ptr<<endl;

    *score_ptr = 200; //changes value of score to 200
    cout<<*score_ptr<<endl;
    cout<<score<<endl;

    double high_temp (100.7);
    double low_temp (37.4);
    double *temp_ptr (&high_temp);
    cout<<"\n"<<*temp_ptr<<endl;
    temp_ptr = &low_temp; //changes to point to low_temp variable
    cout<<*temp_ptr<<endl;

    string name {"frank"};
    string *string_ptr {&name};
    cout<<"\n"<<*string_ptr<<endl;
    name = "james"; //changes value of name to james
    cout<<*string_ptr<<endl;

    vector <string> colors {"purple", "blue", "teal"};
    vector <string> *vector_ptr {nullptr};
    vector_ptr = &colors;
    cout<<"\nfirst color: "<<(*vector_ptr).at(0)<<endl;
    cout<<"colors: ";
    for (auto color: *vector_ptr)
        cout<<color<<' ';
    cout<<endl;
    return 0;
}
*/

// POINTERS PRACTICE----------------------------------------------------
/*
//class example ch12
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num (10);
    cout<<"value of num is "<<num<<endl;
    cout<<"sizeof num is "<<sizeof num<<endl;
    cout<<"address of num is "<<&num<<endl;

    int *p;
    cout<<"\nvalue of p is "<<p<<endl;
    cout<<"address of p is "<<&p<<endl;
    cout<<"sizeof p is "<<sizeof p<<endl;

    p = nullptr;
    cout<<"\nvalue of p is now "<<p<<endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4 {nullptr};
    string *p5 {nullptr};

    cout<<"\nsizeof p1 (int) is "<<sizeof p1<<endl;
    cout<<"sizeof p2 (double) is "<<sizeof p2<<endl;
    cout<<"sizeof p3 (unsigned long long) is "<<sizeof p3<<endl;
    cout<<"sizeof p4 (string vector) is "<<sizeof p4<<endl;
    cout<<"sizeof p5 (string) is "<<sizeof p5<<endl;

    int score (10);
    int *score_ptr {nullptr};
    score_ptr = &score;
    cout<<"\nvalue of score is "<<score<<endl;
    cout<<"address of score is "<<&score<<endl;
    cout<<"value of score_ptr is "<<score_ptr<<endl;

    return 0;
}
*/

// FUNCTIONS FULL MENU--------------------------------------------------
/*
//challenge ch11
//make ch9 challenge but use functions (full menu)
#include <iostream>
#include <vector>

using namespace std;

void menu ();
void print (const vector <int>&);
void add (vector <int>&);
void avg (const vector <int>&);
void min (const vector <int>&);
void max (const vector <int>&);

void menu(){
    cout<<"\nMENU:";
    cout<<"\nP - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean"<<endl;
    cout<<"S - Display smallest number"<<endl;
    cout<<"L - Display largest number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<"\nEnter your selection:";
}
void print (const vector <int>& vec){
    cout<<"\nP - Print numbers:"<<endl;
    if (vec.size() > 0){
        for (auto val: vec){
            cout<<val<<endl;
        }
    } else{
        cout<<"No numbers found"<<endl;
    }
}
void add (vector <int>& vec){
    int num {};
    cout<<"\nA - Add a number:"<<endl;
    cout<<"Input an integer:";
    cin>>num;
    vec.push_back(num);
    cout<<num<<" added."<<endl;
}
void avg (const vector <int>& vec){
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
}
void min (const vector <int>& vec){
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
}
void max (const vector <int>& vec){
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
}

int main(){
    char selection {};
    vector <int> vec {};

    do{
        menu();
        cin>>selection;
        switch (selection){
            case 'P':
            case 'p':
                print(vec); break;
            case 'A':
            case 'a':
                add(vec); break;
            case 'M':
            case 'm':
                avg(vec); break;
            case 'S':
            case 's':
                min(vec); break;
            case 'L':
            case 'l':
                max(vec); break;
            case 'Q':
            case 'q':
                cout<<"goodbye"<<endl; break;
            default: cout<<"Invalid choice, try again."<<endl;

        }
    } while (selection != 'q' && selection != 'Q');
    return 0;
}
*/

// RECURSION PRACTICE----------------------------------------------------
/*
//class example ch11
#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);
unsigned long long fibonacci(unsigned long long);

unsigned long long factorial(unsigned long long n){
    if (n==0)
        return 1; //base case
    return n * factorial(n-1); //recursion
}

unsigned long long fibonacci(unsigned long long n){
    if (n <= 1)
        return n; //base case
    return fibonacci(n-1) + fibonacci(n-2); //recursion
}


int main(){
    cout<<factorial(3); //6
    cout<<fibonacci(5); //5
    return 0;
}
 */

// PASS BY REF PRACTICE--------------------------------------------------
/*
//class example ch11
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_ref1(int &num);
void pass_ref2(string &s);
void pass_ref3(vector<string> &v);
void print_vec(const vector<string> &v);

void pass_ref1(int &num){
    num = 1000;
}
void pass_ref2(string &s){
    s = "changed";
}
void pass_ref3(vector<string> &v){
    v.clear();
}
void print_vec(const vector<string> &v){
    for (auto s:v)
        cout<<s<<' ';
    cout<<endl;
}

int main(){
    int num (10);
    int another_num(20);
    string name ("Claire");
    vector <string> colors{"purple", "blue", "teal"};


    cout<<"num before pass by ref 1: "<<num<<endl;
    pass_ref1(num);
    cout<<"num after pass by ref 1: "<<num<<endl;

    cout<<"name before pass by ref 2: "<<name<<endl;
    pass_ref2(name);
    cout<<"name after pass by ref 2: "<<name<<endl;

    cout<<"vector before pass by ref 3: ";
    print_vec(colors);
    pass_ref3(colors);
    cout<<"vector after pass by ref 3: ";
    print_vec(colors);
    return 0;
}
*/

// ARRAY FUNCTIONS--------------------------------------------------------
/*
//class example ch11
#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);
//const makes it not change array by accident
void print_array(const int arr[], size_t size){
    for (size_t i{0}; i<size; i++)
        cout<<arr[i]<<" "; //prints contents of array
    cout<<endl;
}
void set_array(int arr[], size_t size, int value){
    for (size_t i{0}; i<size; i++)
        arr[i] = value; //changes value of array - causes problems
}

int main(){
    int my_scores[] {100, 98, 90, 86, 84};

    print_array(my_scores, 5); //prints array values
    set_array(my_scores, 5, 100); //changes all to 100
    print_array(my_scores, 5); //prints 5 100s

    return 0;
}
*/

// PRINT OVERLOAD--------------------------------------------------------
/*
//class example ch11
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print (int num){
    cout<<"printing int: "<<num<<endl;
}
void print (double num) {
    cout<<"printing double: "<<num<<endl;
}
void print (string s){
    cout<<"printing string: "<<s<<endl;
}
void print (string s, string t){
    cout<<"printing 2 strings: "<<s<<" and "<<t<<endl;
}
void print (vector<string> v){
    cout<<"printing vector of strings: ";
    for (auto s: v)
        cout<<s + ' ';
    cout<<endl;
    }

int main(){
    print(100); //int
    print('A'); //ascii int
    print(123.5); //double
    print(123.3F); //float -> double
    print("C-style string"); //string
    string s {"C++ style string"};
    print(s); //string
    print("C-style string", s); //2 strings
    vector <string> colors{"purple", "blue", "teal"};
    print(colors); //vector
    return 0;
}
*/

// CALCULATE COST-------------------------------------------------------
/*
//class example ch11
#include <iostream>

double calc_cost(double base_cost, double tax_rate=0.06, double shipping=3.50);
double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost + ((base_cost*tax_rate) + shipping);
}
double calc_cost_v2(double base_cost, double shipping=3.50, double tax_rate=0.06);
double calc_cost_v2(double base_cost, double shipping, double tax_rate){
    return base_cost + ((base_cost*tax_rate) + shipping);
}

using namespace std;

int main(){
    double cost (0);
    double tax (0);
    double ship (0);
    char choice {};
    char choice2 {};

    cout<<"enter base cost:";
    cin>>cost;
    cout<<"is tax rate 6% (y/n):";
    cin>>choice;
    cout << "is shipping $3.50 (y/n):";
    cin >> choice2;
    if ((choice == 'y' || choice == 'Y') && (choice2 == 'y' || choice2 == 'Y')) {
        //normal tax and shipping rate
        cout << "price: $" << calc_cost(cost);
    }
    else if ((choice != 'y' && choice != 'Y') && (choice2 == 'y' || choice2 == 'Y')){
        //different tax and normal shipping rate
        cout << "enter tax (decimal form):";
        cin >> tax;
        cout << "price: $" << calc_cost(cost, tax);
    }
    else if ((choice2 != 'y' && choice2 != 'Y') && (choice == 'y' || choice == 'Y')){
        //normal tax and different shipping rate
        cout << "enter shipping:";
        cin >> ship;
        cout << "price: $" << calc_cost_v2(cost, ship);
    }
    else if ((choice2 != 'y' && choice2 != 'Y') && (choice != 'y' && choice != 'Y')) {
       //different tax and different shipping
        cout << "enter tax (decimal form):";
        cin >> tax;
        cout << "enter shipping:";
        cin >> ship;
        cout << "price: $" << calc_cost(cost, tax, ship);
    }
    else{
        cout<<"error";
    }


    return 0;
}
*/

// FUNCTION PRACTICE-----------------------------------------------------
/*
//class example ch11
#include <iostream>

using namespace std;

const double pi (3.1415);
double calc_area_circle(double radius){
    return pi*radius*radius;
}

double calc_volume_cylinder(double radius, double height){
    return calc_area_circle(radius)*height;
}

void area_circle(){
    double radius(0);
    cout<<"\nEnter radius of circle:";
    cin>>radius;
    cout<<"The area of a circle with radius "<<radius
    <<" is: "<<calc_area_circle(radius)<<endl;
}

void volume_cylinder(){
    double radius (0);
    double height (0);
    cout<<"\nEnter radius of cylinder:";
    cin>>radius;
    cout<<"Enter height of cylinder:";
    cin>>height;
    cout<<"The volume of a cylinder with radius "<<radius
    <<" and height "<<height<<" is: "
    <<calc_volume_cylinder(radius, height)<<endl;
}

int main(){
    cout<<"FUNCTIONS PRACTICE:";
    area_circle();
    volume_cylinder();
    return 0;
}
 */

// LETTER PYRAMID---------------------------------------------------------
/*
//assignment ch10
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string input {};
    int spaces (0);

    cout<<"Enter the string to display as a pyramid:";
    getline(cin, input);


    for (int i (0); i < input.length(); i++){
        spaces = input.length() - i;
        while (spaces != 0) {
            cout << " ";
            spaces--;
            //^spaces before
        }
        for (int j (0); j < i; j++){
            cout<<input.at(j);
            //^up to center
        }
        cout<<input[i];
        //^center
        for (int k (i-1); k >=0; k--){
            auto y = static_cast<size_t>(k); // what is happening here???
            cout<<input.at(y);
            //^reverse after center
        }
        cout<<endl;
    }

    return 0;
}
 */

// ENCRYPTION CIPHER-------------------------------------------------------
/*
//challenge ch10
#include <iostream>
#include <string>

using namespace std;

int main(){
    string message {};
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    string alphakey {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfoumpciasr9876543210"};
    char selection {};

    cout<<"WELCOME TO THE MESSAGE ENCRYPTION PROGRAM!";
    do {
        cout<<"\n------------------------------------------------"<<endl;
        cout<<"OPTIONS:" << endl;
        cout<<"1. Encrypt a message" << endl;
        cout<<"2. Decipher a message" << endl;
        cout<<"Q. Quit" << endl;
        cout<<"Selection:";
        cin>>selection;
        switch(selection){
            case '1':
            {
                cout<<"Enter a secret message (end with %):";
                getline(cin, message, '%');
                cout<<"Your encrypted message is:\n";
                for (auto i: message){
                    if (isalnum(i)){
                        //find i in alphabet and
                        // swap with same index in alphakey
                        cout<<alphakey[alphabet.find(i)];
                    }else if (isspace(i)){
                        cout<<" ";
                    }else{
                        continue;
                    }
                }
                break;
            }
            case '2':
            {
                cout<<"Enter an encrypted message (end with %):";
                getline(cin, message, '%');
                cout<<"Your deciphered message is:\n";
                for (auto i: message){
                    if (isalnum(i)){
                        //find i in alphakey and
                        // swap with same index in alphabet
                        cout<<alphabet[alphakey.find(i)];
                    }else if (isspace(i)){
                        cout<<" ";
                    }else{
                        continue;
                    }
                }
                break;
            }
            case 'q':
            case 'Q':
                cout<<"goodbye!"<<endl; break;
            default:
                cout<<"\ninvalid option, try again"<<endl; break;
        }
    }while (selection != 'q' && selection != 'Q');
    return 0;
}
*/

//C++-STYLE STRING PRACTICE----------------------------------------------
/*
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
*/

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