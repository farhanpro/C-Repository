#include <iostream>
//#include "adder.h"
using namespace std;

template<typename T>
T addme(T a, T b)
{
    return a + b;
}
T lifeup(*a)
{
    return ++&a;
}


int main()
{
    int a = 10;
    int b = 20;
    float c = 30.40;
    float d = 40.60;
    int *e = &a; 
    
    cout<<addme(a,b)<<endl;
    cout<<addme(c,d)<<endl;
   // cout<<lifeup(*e)<<endl;
  //  cout<<lifeup(*e)<<endl;


    return 0 ;
}