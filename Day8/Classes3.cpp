#include<iostream>
#include <string>
using namespace std;

class One
{public: virtual void intro(){cout<<"I am One\n"<<endl;}};

class Two : public One
{public :void  intro(){cout<<"I am Two\n"<<endl;}};

class Three : public Two
{public : void intro(){cout<<"I am Three\n"<<endl;}};

int main()
{
    One *A;
    Two B;
    Three C;

    A = &B;
   A->intro();

    A = &C;
   A->intro();

    return 0;
}