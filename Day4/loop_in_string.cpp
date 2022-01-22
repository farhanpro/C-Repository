#include <iostream>
using namespace std;
int  main()
{
    char name[] = {'F','A','R','H','A','N',0};
    char myname[] = "Farhan";
    cout<<myname<<endl;

     for(int i=0;name[i]!=0;i++)
     {
         cout<<"Normal "<<name[i]<<endl;
     }
    for (char *cp = myname; *cp != 0 ;*cp++)
    {
        cout<<"Running "<<*cp<<endl;
    }
    for (char i:myname)
    {
        cout<<"Value is  : "<<i<<endl;
    }
 
    return 0;
}