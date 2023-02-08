#include <iostream>
using namespace std;

// Takes arguments by value
int square(int x)
{
    return x = x * x;
}
// Takes arguments by address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// Takes an argument by reference
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 9, b;
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}