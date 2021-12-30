/***********************************************************************
created 12/23/2021 - c++ udemy online course
contents:
 PROGRAM NAME:                                                 LINES:
 * favorite number
 * room area
 * carpet cleaner
 * vectors practice

**************************************************************************
*/

// FAVORITE NUMBER -----------------------------------------------------
/*
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


// ROOM AREA-------------------------------------------------------------
/*
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


// CARPET CLEANER-------------------------------------------------------
/*
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


//VECTORS PRACTICE-------------------------------------------------------
/*
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


//next
/*
#include <iostream>

using namespace std;

int main(){
    return 0;
}
 */