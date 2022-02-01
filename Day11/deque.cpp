#include<iostream>
#include <algorithm>
#include <deque>

using namespace std;
int main()
{
    deque<int> mynums;
    mynums.push_back(2);
    mynums.push_back(4);
    mynums.push_back(6);
    mynums.push_back(8);
    mynums.push_back(10);
    mynums.push_back(12);
    mynums.push_back(14);
    mynums.push_back(16);
    mynums.push_front(1);
    mynums.push_front(3);
    mynums.push_front(5);
    mynums.push_front(7);
    mynums.push_front(9);
    mynums.push_front(11);

    for(int i : mynums)
    {
        cout<<i<<" ";
    }
    return 0;
}