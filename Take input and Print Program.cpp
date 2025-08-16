// Program to take a name as input and print "Namah Shivaya , [name] !"


#include <iostream>
using namespace std;

int main()
{
    string name;                                                 // its a variableto store the name which is taken as input from the writer or user .

    cout << "Enter your name = ";                                // it tells the user to enter their name .
    cin >> name;                                                 // it takes the input from the user and stores it in character variable name .

    cout << "Namah Shivaya , " << name <, "!" << endl;          // it prints the message "Namah Shivaya , [name] !" where [name] is replaced by the name enteres by the user .

    return 0;
}
