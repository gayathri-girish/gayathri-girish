// Program to Convert Celcius to Farenheit .


#include <iostream>
using namespace std;

int main()
{
    double celsius , farenheit;

    cout << "Enter temperature in Celsius = ";
    cin >> celsius;

    farenheit = (celsius * 9/5) + 32;                               // Formula to Convert Celsius to Farenheit .

    cout << "Temperature in Farenheit = " << farenheit << endl;

    return 0;
}