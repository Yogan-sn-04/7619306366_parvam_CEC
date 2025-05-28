#include <iostream>
using namespace std;
int main() {
    int number=30;
    int *p;
    p=&number;
    cout<<"Address of number variable is:\n"<<&number;
    cout<<"Address of p variable is:\n"<<p<<endl;
    cout<<"Value  of p variable is:\n"<<*p<<endl;
    return 0;
}