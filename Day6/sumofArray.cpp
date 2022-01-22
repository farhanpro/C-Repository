#include <iostream>
using namespace std;

int SumArray(int arr[])
{
    static int sum;
    for (int i=0;i<=5;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1,2,3,4,10,11};
    cout<<SumArray(arr)<<endl;
    return 0;
}