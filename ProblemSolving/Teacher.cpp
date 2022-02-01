#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number you want to multiply with"<<endl;
    cin>>num;
    for(int i=1;i<=12;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
    return 0;

}