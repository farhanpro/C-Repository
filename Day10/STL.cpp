#include<iostream>
#include<string>
using namespace std;

template<typename T>

T getBigger(T a, T b)
{
    return (a>b) ?a:b;
}

int main()
{
    cout<<getBigger(4.4,3.7)<<endl;
    return 0;
}