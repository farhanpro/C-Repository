#include <iostream>
#include "adder.h"
using namespace std;

int main()
{
    int countr  =3;
    int life = 4;
    float countr2 = 3.4;
    float life2 = 4.6;
    //  *life = 9;
    //  cout<<countr<<endl;

    cout<<addme(life,countr)<<endl;
    cout<<addme(life2,countr2)<<endl;
    cout<<lifeup(&life)<<endl;
    cout<<lifeup(&life)<<endl;;
    return 0;
}