#include <iostream>
using namespace std;

int main()
{
    int my_number[] = {1,2,3,4,5,6,7,8};
    int i,j,k = 0;
    while(i<8)
    {
        // if (my_number[i] == 4 )
        // {
        //     cout<<"Boomm"<<endl;
        //     break;
        // }
        if(i ==5)
        {
            i++;
           cout<<"Skip this one"<<endl;
            continue;
        }
        cout<<my_number[i]<<endl;
        i++;
    }

    return 0 ;
}