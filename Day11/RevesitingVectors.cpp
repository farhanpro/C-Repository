#include<iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums;
    vector<string> heros {"Batman","Flash","Superman","Robin"};
    heros.push_back("Superman");
    nums.push_back(49);
    for(int i =0;i<=5;i++)
    {
        nums.push_back(i);
    }
    cout<<nums.size()<<endl;
    cout<<nums.capacity()<<endl;
    for (auto i = nums.begin(); i != nums.end();++i)
    {
        cout<<*i<<" ";
    }
    return 0;
}