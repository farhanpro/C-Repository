#include<iostream>
using namespace std;

class Myfloat{
    float ft;
    public:
    Myfloat(){
        ft=0.1;
    }
    void getvalue()
    {
            cout<<ft<<endl;
    }
    void operator()(float v)
    {
        ft += v;
    }
};
int main()
{
    Myfloat glob;
    glob.getvalue();
    glob(1);
    glob.getvalue();
    glob(2);
    glob.getvalue();

return 0;


}