#include <iostream>
#include <string>
using namespace std;
class User{
    int secret = 22;
public :
    string name = "Default";
    void classMessage()
    {
        cout<<"Class is Greate "<<name<<" "<<secret<<endl;
    }
    void setter(int &NewSec)
    {
        secret = NewSec;
    }
};
int main()
{
    int no = 40;
    int *roll = &no;
    User sam;
    sam.name = "Farhan";
    sam.setter(*roll);
    sam.classMessage();
    User Petrt = sam;  //everything sam consist will be given to petrt
    return 0;
}