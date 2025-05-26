#include <iostream>
using namespace std;
int main() 
{
    int size;
    cout << "Enter the size of square matrices: ";
    cin >> size;
    int matrix1[size][size], matrix2[size][size], result[size][size];
    cout << "\nEnter elements of first matrix:\n";
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size; j++) 
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "\nEnter elements of second matrix:\n";
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size; j++) 
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size; j++) 
        {
            result[i][j] = 0;
        }
    }
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size; j++) 
        {
            for(int k = 0; k < size; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "\nResult of matrix multiplication:\n";
    for(int i = 0; i < size; i++) 
    {
        for(int j = 0; j < size; j++) 
        {
            cout << result[i][j] << "\t";
        }
        cout ;
    }
    return 0;
}