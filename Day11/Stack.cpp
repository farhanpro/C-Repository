#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;
int main()
{
    stack<int> mystack;
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    mystack.push(6);
    mystack.push(7);
    mystack.push(8);
    while (!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
    
    return 0;
}