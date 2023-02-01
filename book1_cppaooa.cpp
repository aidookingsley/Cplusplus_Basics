#include <iostream>
#include <string>
using namespace std;
int main()
{
    // std::cout << "This is a simple program in C++ ";
    // std::cout << "to show the main structure." << std::endl;
    // std::cout << "We learn more about the language ";
    // std::cout << "in this chapter and the rest of the book.";

    // Defining varaibles
    // string first;
    // string initial;
    // string last;
    // string space = " ";
    // string dot = ".";
    // string fullName;

    // Input data for the first name, initial, and last name
    // cout << "Enter the first name: ";
    // cin >> first;
    // cout << "Enter the initial: ";
    // cin >> initial;
    // cout << "Enter the last name: ";
    // cin >> last;
    // Formation of full name using concatenation operator
    // fullName = first + space + initial + dot + space + last;
    // Outputting full name
    // cout << "The full name is: " << fullName;

    // double x = 12.24;
    // double y = 14.32;
    // cout << x << " + " << y;

    // char x = 'A';
    // char y = 'B';
    // cout << x << y;

    // bool truth = true;
    // bool lie = false;
    // bool result = truth + lie;
    // cout << result;
    // string space = "";
    // cout << "H  H" << endl;
    // cout << "H  H" << endl;
    // cout << "HHHH" << endl;
    // cout << "H  H" << endl;
    // cout << "H  H" << endl;
    int number;
    cout << "Please enter any whole number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "You have entered even number." << endl;
    }
    else
    {
        cout << "You have entered odd number." << endl;
    }
    cout << "Thanks. Bye.";

    system("pause>0");
    return 0;
}