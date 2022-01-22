#include <iostream>
using namespace std;
 int getTwo()
 {
    return 2;
 }
//0x40155b <intresting()>
 void intresting()
 {
     puts("I AM INTRESTING");
 }

int main()
{
    int whatIgot = getTwo();
    void (*pointstointresting)()= intresting;
    cout<<whatIgot<<endl;
    pointstointresting();
    return 0;
}