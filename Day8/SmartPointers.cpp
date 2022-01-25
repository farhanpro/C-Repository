#include<iostream>
#include<string>
#include<memory>
using namespace std;
class User{
   public:
    User()
    {
        cout<<"User Created"<<endl;
    }
    ~User()
    {
        cout<<"User Deleted"<<endl;
    }
    void testFunc()
    {
        cout<<"I am a test Function"<<endl;
    }
};

int main()
{
    {
        //unique_ptr<User> Sam (new User()); 
        unique_ptr<User> sam= make_unique<User>();
        sam ->testFunc();
    }
    {
       // shared_ptr<User> tim( new User());
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr<User> timm = tim;
    }
    return 0;

}