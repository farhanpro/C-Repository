//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copźright © 2020 lco. All rights reserved.
// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
    Phone(); //default constructor
public:
   
    Phone(const string & name, const string & os, const int & price); //parameter constructor
    Phone(const Phone &); // copy constructor
    string getName(){
        printf("Value of getName is %p\n", this);
        return _os;
        
    }
    int getPrice();
    ~Phone(); //destructor
};

int Phone::getPrice(){
    printf("Value of getPrice is %p\n", this);
    return _price;
}

Phone::Phone() : _name(), _os("Andy"), _price(){
    puts("Default constructor");
}

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("this is parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("OVERWRITE copy constructor");
    _name = "new-"+values._name;
    _os = "skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str());
}


int main()
{
   
//    Phone samsungA1;
//    cout << samsungA1.getName() << endl;
    
    Phone OnePlus8("OP8", "Android-Oxy", 799);
    cout << OnePlus8.getName() << endl;
    
    printf("Value of object is %p\n", &OnePlus8);
    
    cout << OnePlus8.getPrice() << endl;
   
    Phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getName() << endl;
    
    return 0;
}
