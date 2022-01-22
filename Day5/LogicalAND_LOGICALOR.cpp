#include <iostream>
using namespace std;
int main()
{
    bool isSingedin = true;
    bool isAdmin = true;
    bool GoogleSingedin = false;
    bool FBSingedin = false;

    if (isAdmin == true && (GoogleSingedin == true || FBSingedin == true))
    {
        cout<<"Welcome Admin"<<endl;
    }
    else if((GoogleSingedin == true || FBSingedin == true) && isAdmin == false)
    {
        cout<<"Welcome User"<<endl;
    }    
    else
    {
        cout<<"Please Singin"<<endl;
    }
    return 0;
}