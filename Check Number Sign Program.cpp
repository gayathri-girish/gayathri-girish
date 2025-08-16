// Program to Check if a number is Positive , Negative , or Zero .


#include <iostream>
using namespace std;

int main()
{
    int a; // Variable to store the number .

    cout << "Enter a number = ";
    cin >> a;

    if (a > 0) 
    {
        cout << "The number is Positive ." << endl;
    }

    else if (a < 0)
    {
        cout << "The number is Negative ." << endl;
    }

    else
    {
        cout << "The number is Zero ." << endl;
    }

    return 0;
}