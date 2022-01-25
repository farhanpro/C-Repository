#include<iostream>
#include <string>
#include <vector>
using namespace std;

struct corners{
    float a,b,c,d,e;
};
ostream& operator<<(ostream& stream,const corners& corner)
{
    stream<<corner.a<<" "<<corner.b<<" "<<corner.c<<" "<<corner.d<<" "<<corner.e<<" "<<endl;
    return stream;
}

int main()
{
    vector <int> inty;
    inty.push_back(2);
    inty.push_back(4);
    inty.push_back(6);
    inty.push_back(7);
    inty.push_back(3);
    for (auto i = inty.begin() ;i != inty.end();++i )
    {
        cout<<*i<<endl;
    }
    vector<corners> Corners;
    Corners.push_back({1,2,3,4});
    Corners.push_back({5,6,7,8});

    for (int i = 0;i<Corners.size();++i)
    {
        cout<<Corners[i]<<endl;
    }
    return 0;
}