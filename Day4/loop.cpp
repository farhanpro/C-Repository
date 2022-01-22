#include <iostream>
using namespace std;
int main()
{
    int my_int[] = {23,45,21,45,65,25,64};

    for (int i=0;i<7;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
        
    }
    

    return 0;
}