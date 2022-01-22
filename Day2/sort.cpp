#include <iostream>
using namespace std;

int main()
{
   int  Array[5] =  {33,22,11,43,13};
   int i = 0;
   int j = 0;
   int temp = 0;
   
   for (int i=0 ; i<=5;i++)
   {
    for(int j=0 ; j<=5;j++)
    {
        if (Array[i] > Array[i+j]) 
        {
            temp = Array[i];
            Array[i] = Array[i+j];
            Array[i+j] = temp;
        }
    }
    cout<<Array[i]<<endl;
   }

}