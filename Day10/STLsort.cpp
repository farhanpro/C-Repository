#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[6] = {3,2,4,7,6,9};
    cout<<"Unsorted values"<<endl;
    for(int i:numbers)
    {
        cout<<i<<" ";
    }
    sort(numbers,numbers + 6  );
    cout<<"\nSorted values"<<endl;
    for(int i:numbers)
    {   
        cout<<i<<" ";
    }
    return 0;
}