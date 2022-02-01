#include<iostream>
#include <string>
#include <vector>
using namespace std;
string findNumber(vector<int> arr, int k)
 {
    for(int i : arr)
    {
       if(k == i)
       {
           return "Yes";
       }
       else
       {
           return "No";
       }
    }
    return "Farhan";
}


int main()
{
    vector <int> arr {1,4,3,56,6,8};
    int k = 3;
    cout<<findNumber(arr, k);
}