#include<iostream>
using namespace std;
int main()
{
    int num ;  
    static int fact = num - 1;             //number=number*(-1);
    cin >> num;
    for(int i = num;i>1;i--)
    {
         fact = fact * i;
        
    }
    fact = fact*(-1);
    cout<<fact<<endl;
    return 0;
}