#include <iostream>
using namespace std;
class Employee
{
public:
Employee()
{
cout<<"Default Constructor Invoked"<<endl;
 }

~Employee()
{
cout<<"Destructor Evoked \n";
}
};
int main(void)
{
    cout<<"In Main func \n";
    cout<<"1st obj \n";
    Employee el; 
    cout<<"2nd obj \n";
    Employee e2;
    cout<<"Ending main func\n";
    return 0;
}