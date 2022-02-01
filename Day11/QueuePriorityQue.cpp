#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
int main()
{
    queue<int> myint;
    myint.push(2);
    myint.push(4);
    myint.push(9);
    myint.push(1);

    cout<<myint.front()<<endl;
    cout<<myint.back()<<endl;
    myint.pop();
    cout<<myint.front()<<endl;
    
    return 0;

}