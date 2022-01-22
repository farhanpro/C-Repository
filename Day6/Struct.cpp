#include <iostream>
using namespace std;

struct User
{
    const int uid;

    const char *name;
    const char *email;
    int course_counr;
};

int main()
{
    User farhan = {3 , "Farhan","shaikhfarhan549@gmail.com",4};
    User tauseef = {42,"Tauseef","Tauseef32@gmail.com",3};
    
    cout<<farhan.email<<endl;
    cout<<tauseef.email<<endl;
    cout<<farhan.uid + tauseef.uid<<endl;
    return 0;
}