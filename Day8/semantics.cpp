#include<iostream>
#include <string>
using namespace std;

void swap(int &one,int &two)
{
    int three = move(one);
    one = move(two);
    two = move(three);
}
string Printme()
{
    return "I am a Printer";
}
int main()
{
    int one = 4;
    int two = 5;
    swap(one , two);
    string s = Printme();
    string&& ss = Printme();
    return 0;
}