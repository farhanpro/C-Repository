#include<iostream>
#include <string>
using namespace std;
class User{
    int RollNO;
    public:
    string Name = "Default";
    string STD = "MCA"; 

};

int main()
{
   User stud1, stud2;
   stud1.Name = "Farhan";
   stud1.STD = "FYMCA";  
   cout<<stud1.Name<<stud1.STD<<endl;
    cout<<stud2.Name<<stud2.STD<<endl; 
    
    return 0;
}