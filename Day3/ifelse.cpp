#include <iostream>
using namespace std;

int main()
{
    int rating = 4;
    if (rating == 5)
    {
        cout<<"5 Star  Rated"<<endl;
    }
    else if(rating==4)
    {
        cout<<"4 Star Rated"<<endl;
    }
    else
    {
        cout<<"In Between 1 to 3 star Rated"<<endl;
    }
    printf("Your rating is %s",rating >= 4 ? "Greater than 3 ": "Less than 3");
    return 0;
}