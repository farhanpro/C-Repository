#include<iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numbers[6] ={3,2,7,1,6,9};
    cout<<"Unsorted Array"<<endl;
    for(int i : numbers)
    {
        cout<<i<<endl;
    }
    sort(numbers,numbers + 6);
    //search only works on sorted arrays so remember always to 
    // first sort an array and then use search on it
   if (binary_search(numbers,numbers +6,7)){
       cout<<"NUMBER FOUND"<<endl;
   }
   else
   {
       cout<<"NUMBER NOT FOUND"<<endl;
   }
    
    for (int i : numbers)
    {
        cout<<i<<endl;
    }
    return 0;
}