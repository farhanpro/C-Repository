#include<iostream>
#include<string>
using namespace std;

class Phone{
    string _name = " ";
    string _os = " ";
    int price  = 0;

public : 
    Phone(); //default constructor
     Phone(const string &name ,const string  &os,const int & price); //Parameter Constructor 
     Phone(const Phone &); // Copy Constructor
     string getName(){return _os;}
    // ~Phone(); // Destructor

};
Phone::Phone() : _name(),_os("Android"), price(){puts("Default Constructor");};

Phone::Phone(const string &name ,const string  &os,const int & price) : _name(name), _os(os), price(price)
{
    puts("This is Parameter Constructor");
}

Phone::Phone(const Phone & values){ 
    puts("OverWrite Copy Constructor");
    _name = values._name;
    _os = "Skinned-"+values._os;
    price = values.price;
}

Phone:: ~Phone()
{
    printf("Destructor Called For  %s\n",_name.c_str());
}

int main()
{
    Phone SamsungA2;
    cout<<SamsungA2.getName()<<endl;
    
    Phone OnePlus8("OnePlus8","Android",799);
    
    Phone OnePlus8S = OnePlus8;
    cout<<OnePlus8S.getName()<<endl;
    
    return 0;

}