#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int> mylist;
    for (int i =3 ;i <= 10;i++)
    {
            mylist.push_back(i);
    }
    cout<<mylist.front()<<endl;
    mylist.pop_back();
    mylist.reverse();
    cout<<mylist.back()<<endl; 
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    return 0;
}