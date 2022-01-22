#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string my_color;
    cout << "Enter Your Favorite Color : \n";
    getline (cin, my_color);
    cout << "Hey "<< my_color << " Is my Favorite Too"<<endl;
    return 0;
}