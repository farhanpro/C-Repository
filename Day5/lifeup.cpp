#include <iostream>
using namespace std;
int lifeup()
{
   static int life =3;
    return life = life +1;
}
int main()
{
    int life = 3;
    cout<<"Your starting game life is : "<<life<<endl;

    life = lifeup();
    cout<<"Your Updated Game Life is : "<<life<<endl;

    life = lifeup();
    cout<<"Your Updated Game Life is : "<<life<<endl;


    return 0;
}