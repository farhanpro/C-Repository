#include <iostream>
#include <string>
using namespace std;

string api_call()
{
    return "Got some data back from api";
}

int another_api_call()
{
    return 4;
}

int main()
{
    auto response = api_call();
    cout<<response<<endl;
   if (typeid(response) == typeid(string))
   {
       cout<<"True"<<endl; 
   }
   
    return 0;
}