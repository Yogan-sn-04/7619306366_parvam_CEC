#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;
    std::cout << " NAME: YOGAN SUBRAMANYA NAIK \n YEAR:2024-28\n BRANCH:ISE\n SEM:2ND\n COLLEGE:CEC";
    std::cout << " \n**\n";
    cout << "Enter marks for subject 1: ";
    cin >> m1;
    cout << "Enter marks for subject 2: ";
    cin >> m2;
    cout << "Enter marks for subject 3: ";
    cin >> m3;
    cout << "Enter marks for subject 4: ";
    cin >> m4;
    cout << "Enter marks for subject 5: ";
    cin >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    std::cout << "\n**\n";
    cout << "Total Marks = " << total;
    cout << "\tAverage = " << average;
    if (average >= 90) 
    {
        cout << "\tGrade = A";
    } 
    else if (average >=70) 
    {
        cout << "\tGrade = B";
    } 
    else 
    {
        cout << "\tGrade = C";
    }

    return 0;
}
