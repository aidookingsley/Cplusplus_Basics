#include <iostream>
using namespace std;
// int main()
// {
//     // user enters side lengths of a triangle (a, b, c)
//     // Program should write out whether that triangle is
//     // equilateral, isosceles or scalene
//     // float a, b, c;
//     // cout << "Enter the side lengths of your triangle as a, b, c: ";
//     // cin >> a >> b >> c;

//     // if (a == b && b == c)
//     // {
//     //     cout << "Equilateral triangle";
//     // }
//     // else
//     // {
//     //     if (a != b && a != c && b != c)
//     //     {
//     //         cout << "Scalene triangle";
//     //     }
//     //     else
//     //     {
//     //         cout << "Isosceles triangle";
//     //     }
//     // }

//     // Program for swapping values of two variables;
//     // int a = 20;
//     // int b = 10;

//     // int temp = a;
//     // a = b;
//     // b = temp;
//     // cout << "a = " << a << ", b = " << b << endl;

//     // MATHEMATICAL APPROACH;
//     // int a = 20;
//     // int b = 10;

//     // a = a + b;
//     // b = a - b;
//     // a = a - b;
//     // cout << "a = " << a << endl
//     //      << "b = " << b << endl;
//     return 0;
// }

// BMI CALCULATOR;
// int main()
// {
//     // BMI calculator
//     // weight(kg) / height * height(m)
//     // Underweight < 18.5
//     //  Noraml weight 18.5 - 24.9
//     // Overweight > 25;

//     float weight, height, bmi;
//     cout << "Weight(kg), height(m): ";
//     cin >> weight >> height;
//     bmi = weight / (height * height);

//     if (bmi < 18.5)
//         cout << "You are Underweight, speak to a Nutritionist" << endl;
//     else if (bmi > 25)
//         cout << "You are Overweight, speak to a Nutritionist, exercise regularly" << endl;
//     else
//         cout << "You have Normal weight, keep up the healthy lifestyle" << endl;

//     cout << "Your bmi is " << bmi << endl;
//     cout << "A healthy lifestyle is a priceless gift that you can give to yourself" << endl;
//     system("clear");
//     return 0;
// }

// GUESSING GAME
// int main()
// {
//     int hostUserNum, guestUserNum;
//     cout << "Host: ";
//     cin >> hostUserNum;
//     system("clear");
//     cout << "Guest: ";
//     cin >> guestUserNum;

//     (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";
//     return 0;
// }

// BUILDING A CALCULATOR;
// int main()
// {
//     float num1, num2;
//     char operation;
//     cout << "**Adekyensroma calculator**" << endl;
//     cin >> num1 >> operation >> num2;

//     switch (operation)
//     {
//     case '-':
//         cout << num1 << operation << num2 << " = " << num1 - num2;
//         break;
//     case '+':
//         cout << num1 << operation << num2 << " = " << num1 + num2;
//         break;
//     case '/':
//         cout << num1 << operation << num2 << " = " << num1 / num2;
//         break;
//     case '*':
//         cout << num1 << operation << num2 << " = " << num1 * num2;
//         break;
//     case '%':
//         bool isNum1Int, isNum2Int;
//         isNum1Int = ((int)num1 == num1); // 5==5.0;
//         isNum2Int = ((int)num2 == num2);

//         if (isNum1Int && isNum2Int)
//             cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;
//         else
//             cout << "Not valid!";
//         break;
//     default:
//         cout << "Not valid operation!" << endl;
//     }
//     return 0;
// }

// LEAP YEAR;
// int main()
// {
//     //(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//     int year, month;
//     cout << "Year, month: ";
//     cin >> year >> month;

//     switch (month)
//     {
//     case 2:
//         (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month." : cout << "28 days month.";
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         cout << "30 days month.";
//         break;
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         cout << "31 days month.";
//         break;
//     default:
//         cout << "Not valid!";
//     }
//     return 0;
// }

// LOOPS AND ITERATIONS
// int main()
// {
//     // Write out all the numbers between 100-500 that are
//     //  divisible by 3 and 5

//     int counter = 100;
//     while (counter <= 500)
//     {
//         if (counter % 3 == 0 && counter % 5 == 0)
//             cout << counter << " is divisible\n";
//         counter++;
//     }
//     return 0;
// }

// DIGITAL COUNTER
// int main()
// {
//     // Count digits of a number
//     int number;
//     cout << "Number: ";
//     cin >> number;

//     if (number == 0)
//         cout << "You have entered 0.\n";
//     else
//     {
//         if (number < 0)
//             number = -1 * number;

//         int counter = 0;
//         while (number > 0)
//         {
//             number /= 10;
//             counter++;
//         }
//         cout << "Number contains " << counter << " digits\n";
//     }
//     return 0;
// }

// REVERSED NUMBER;
// int main()
// {
//     // Reversing number;

//     int number, reversedNumber = 0;
//     cout << "Number: ";
//     cin >> number;

//     while (number != 0)
//     {
//         reversedNumber *= 10;
//         reversedNumber += number % 10;
//         number /= 10;
//     }
//     cout << "Reversed: " << reversedNumber;

//     return 0;
// }

// DOWHILELOOP FOR PIN SETTING
// int main()
// {
//     int userPin = 1234, pin, errorCounter = 0;
//     do
//     {
//         cout << "PIN: ";
//         cin >> pin;
//         if (pin != userPin)
//             errorCounter++;
//     } while (errorCounter < 3 && pin != userPin);

//     if (errorCounter < 3)
//         cout << "Loading...";
//     else
//         cout << "Blocked...";

//     return 0;
// }

// FORLOOP ->FACTORIAL
// int main()
// {
//     // The factorial of a number
//     // 6! = 1*2*3*4*5*6=720;

//     int number;
//     cout << "Number: ";
//     cin >> number;
//     if (number < 0)
//     {
//         cout << number << " is invalid" << endl;
//         return 0;
//     }
//     else if (number == 0)
//         cout << number << "! = " << 1 << endl;

//     int factorial = 1;

//     // for (int i = 1; i <= number; i++)
//     // {
//     //     factorial *= i;
//     // }

//     // ANOTHER MTHD using the decrement method
//     // 5! = 5*4*3*2*1;
//     for (int i = number; i >= 1; i--)
//     {
//         factorial *= i;
//     }
//     cout << number << "! = " << factorial << endl;

//     return 0;
// }

// NESTED LOOP
// int main()
// {
//     int grade, sum = 0;
//     int gradecount = 5;
//     for (int i = 0; i < gradecount; i++)
//     {
//         do
//         {
//             cout << "Enter grade" << i + 1 << ": ";
//             cin >> grade;
//         } while (grade < 1 || grade > 9);
//         sum += grade;
//     }
//     cout << "Sum = " << sum << endl;
//     cout << "Avg grade = " << float(sum) / gradecount << endl;
//     return 0;
// }

// multiplication table
// int main()
// {
//     // Multiplication table

//     for (int i = 1; i <= 12; i++)
//     {
//         for (int j = 1; j <= 12; j++)
//         {
//             cout << i << "  * " << j << " = " << i * j << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// DRAWING PATTERNS
//  #include <iomanip>
//  int main() {
//      int height, width;
//      cout << "Height: ";
//      cin >> height;
//      cout << "Width: ";
//      cin >> width;
//      char symbol;
//      cout << "Symbol: ";
//      cin >> symbol;

//     for (int h = 0; h < height; h++) {
//         for (int w = 0; w < width; w++) {
//             cout << setw(5) << symbol;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// DRAWING RECTANGLES
//  #include <iomanip>
//  int main()
//  {
//      int length;
//      cout << "Length: ";
//      cin >> length;
//      char symbol;
//      cout << "Symbol: ";
//      cin >> symbol;

//     for (int i = 1; i <= length; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << setw(2) << symbol;
//         }
//         cout << endl;
//     }
//     cout << endl << endl;

//     for (int i = length; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << setw(2) << symbol;
//         }
//         cout << endl;
//     }
// }

// FUNCTIONS;
// void func();

// int main()
// {
//     cout << "Hello from main()\n";
//     func();
//     func();
// }
// void func()
// {
//     cout << "Hello from function()" << endl;
// }

// FUNCTION ARGUMENTS
//  void introduceMe(string name, string city, int age = 0)
//  {
//      cout << "My name is " << name << endl;
//      cout << "I am from " << city << endl;
//      if (age != 0)
//          cout << "I am " << age << " years old" << endl;
//      else{}
//  }
//  int main()
//  {
//      string name1, city1;
//      int age1;
//      cout << "Name: ";
//      cin >> name1;
//      cout << "City: ";
//      cin >> city1;
//      cout << "Age: ";
//      cin >> age1;
//      introduceMe(name1, city1, age1);
//      // introduceMe("Saldina", "Mostar", 25);
//      // introduceMe("Anna", "NY");
//
//  }

// CHECK FOR PRIME NUMBERS;

// bool isPrimeNumber(int number) {
//     for (int i = 2; i < number; i++)
//     {
//         if (number % i == 0)
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     int counter=0;
//     for (int i = 1; i<=1000;i++) {
//         bool isPrime = isPrimeNumber(i);
//         if (isPrime){
//             cout<<i<<" is prime number\n";
//             counter++;
//         }
//     }
//     cout<<"There are "<<counter<<" Total number of prime numbers"<<endl;
//     return 0;
//     system("clear");

//     // int number;
//     // cout << "Number: ";
//     // cin >> number;

//     // bool isPrimeFlag = true;
//     // for (int i = 2; i < number; i++)
//     // {
//     //     if (number % i == 0)
//     //     {
//     //         isPrimeFlag = false;
//     //         break;
//     //     }
//     // }
//     //     bool isPrimeFlag = isPrimeNumber(number);

// //     if (isPrimeFlag)
// //         cout << "Prime number" << endl;
// //     else
// //         cout << "Not Prime number" << endl;
// //     system("clear");

// }

// // FUNCTION OVERLOAD;
// int sum(int a, int b);
// double sum(double a, double b);
// float sum(float a, float b, float c);

// int main()
// {
//     cout << sum(4, 3) << endl;
//     cout << sum(4.4, 3.3) << endl;
//     cout << sum(4.4, 3.3, 2.2) << endl;

// }
// int sum(int a, int b)
// {
//     return a + b;
// }
// double sum(double a, double b)
// {
//     return a + b;
// }
// float sum(float a, float b, float c)
// {
//     return a + b + c;
// }

// BUILD ATM MACHINE;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit"<< endl;
    cout << "************************" << endl;
}

int main()
{
    // check balance, deposit, withdraw, show menu;
    int option;
    double balance = 500;
    do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("clear");

    switch (option)
    {
    case 1:
        cout << "Balance is: " << balance << " $" << endl;
        break;
    case 2:
        cout << "Deposit amount: ";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;
    case 3:
        cout << "Withdraw amount: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "Not enough money" << endl;
        break;
    }
    } while (option != 4);
}