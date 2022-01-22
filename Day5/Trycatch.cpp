#include <iostream>
using namespace std;
int main()
{
    char call_api  = 2;
    try {
        cout<<"trying to use API Value"<<endl;
        cout<<"Did Some Testing with api value"<<endl;
        throw call_api;
        cout<<"No Code Execute after return and throw"<<endl;
    }
    catch(int x)
    {
        cout<<"Integer  Exception Handled"<<endl; 
    }
    catch(float x)
    {
        cout<<"Float Exception Handles"<<endl;
    }
    catch(...)
    {
        cout<<"Something Went Wrong"<<endl;
    }
    cout<<"Keep Moving With rest of the code"<<endl;
    return 0;
}