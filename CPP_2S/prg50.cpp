#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
    void getdata()
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
    }
};

int main()
{
    person p1;
    p1.getdata();
    cout<<"Name:"<<p1.name<<endl;
    cout<<"Age:"<<p1.age<<endl;
    return 0;

}
