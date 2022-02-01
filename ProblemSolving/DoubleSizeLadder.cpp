#include<iostream>
using namespace std;

int main()
{
    int i=0;
    for(i=0;i<10;i = i+2)
    {
        cout<<endl;
        for(int j=0;j<=i;j = j+2)
        {
            cout<<" * "<<"*";
        }
        
    }
    
    return 0;
}