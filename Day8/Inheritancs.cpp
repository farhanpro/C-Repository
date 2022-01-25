#include<iostream>
using namespace std;

class Money
{
    public:
    void gotMoney(){
        puts("Got %k USD in my account");
    }
};

class Man
{
    string _name;
    int _age;
    Man(){}

protected:
    Man(const string &name,const int &age): _name(name),_age(age){} //Getter 
    void run(){puts("I can Run");}
public:
    void sayName() const;
};
void Man :: sayName() const{
    cout<<"My Name is :"<<_name<<" And My age is  "<<_age<<endl; 
}
////
class SuperMan : public Man{
    bool flight;
public:
    SuperMan(string name) : Man(name,26){}
    void run(){puts("I can Run at lightning speed");}  
};
///
class SpiderMan : public Man , public Money{
    bool webbig;
public :
    SpiderMan(string name):Man(name,21){}
    void run(){puts("I can Run at Normal speed");}
    
};

int main()
{
    SuperMan clark("Kent");
    clark.sayName();
    SpiderMan peter("Parker");
    peter.sayName();
    peter.gotMoney();
    return 0;
}