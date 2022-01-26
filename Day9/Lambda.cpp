#include<iostream>
#include<string>
using namespace std;
int main()
{
    []{cout<<"Hello Lamda Created\n"<<endl;}();
    auto sum = [](auto a , auto b){return a + b;};
    cout<<"Sum of these 2 values is : "<<sum(1,2)<<endl;
    //when a function is declared after its use the memory of the function 
    // remains their only  but lambda function once used they clear the memory 
    // after their use
    string  name1 = "one";
    string name2 = "two";
   // printf("%c",sum(name1,name2));
    cout<<sum(name1,name2)<<endl;
    return 0;

}