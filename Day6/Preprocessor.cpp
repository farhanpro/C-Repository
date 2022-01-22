#include <iostream>
using namespace std;
enum MsOffice
{
    BOLD,
    ITALIC, 
    UNDERLINE,
    CROSSED
};

int main()
{
     int myattributes = UNDERLINE;
     cout<<myattributes << endl;
    return 0;
}