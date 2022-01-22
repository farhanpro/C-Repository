#include <iostream>
using namespace std;

int main()
{
    int rating;
    cout<<"Please Enter your Rating"<<endl;
    cin>> rating;

    if(rating == 0 )
    {
        cout<<"Your Rating is ZERO"<<endl;
    }
    else if(rating == 1)
    {
        cout<<"Your Rating is One"<<endl;
    }
    else if (rating ==2)
    {
        cout<<"Your Rating is Two"<<endl;
    }
    else if (rating == 3)
    {
        cout<<"Your Rating is Three"<<endl;
    }
    else if (rating ==4)
    {
         cout<<"Your Rating is Four"<<endl;
    }
    else if(rating ==5)
    {
        cout<<"Your Rating is Five"<<endl;
    }
    else
    {
        cout<<"Enter Rating Between 1 to 5"<<endl;
    }
    printf(rating >3 ? "Rating is Good" : "Rating is no that good work on it");
}