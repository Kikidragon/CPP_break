//
// Created on 12/23/2021.
//
# include <iostream>

int main(){ //begins execution
    int favorite_number;  //creates variable as int
    std::cout<<"Enter your favorite number between 1 and 100:";  //print the message
    std::cin>>favorite_number;  //takes input for favorite number and stores
    std::cout<<"Amazing!!! That's my favorite number too!"<<std::endl;  //prints out the message
    std::cout<<"No really!!! " << favorite_number << " is my favorite number!"<<std::endl;
    return 0;
}
