#include <iostream>
using namespace std;
// int main()
// {
//     bool isMale = false;
//     bool isTall = false;

//     if (isMale && isTall)
//     {
//         cout << "You're a tall male";
//     }
//     else if (isMale && !isTall)
//     {
//         cout << "You're a short male";
//     }
//     else if (!isMale && isTall)
//     {
//         cout << "You're tall but not male";
//     }
//     else
//     {
//         cout << "You're not male and tall";
//     }
//     return 0;
// }

// int getMax(int num1, int num2)
// {
//     int result;

//     if (num1 > num2)
//     {
//         result = num1;
//     }
//     else
//     {
//         result = num2;
//     }
//     return result;
// }
// int main()
// {
//     cout << getMax(2, 5) << endl;
//     return 0;
// }
int getMax(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
int main()
{
    cout << getMax(212, 055, 10) << endl;
    return 0;
}