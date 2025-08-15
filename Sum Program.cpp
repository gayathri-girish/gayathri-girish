// Program to input two numbers and Print their Sum .


#include<iostream>
using namespace std;

int main()
{ 
    int a , b , sum;

    cout << "Enter the First Number = ";
    cin >> a;

    cout << "Enter the Second Number = ";
    cin >> b;

    sum = a + b;
    cout << "The Sum of " << a << " and " << b << " is = " << sum << endl;

    return 0;
}