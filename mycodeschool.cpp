// RECURSIONS;
#include <iostream>
#include <cstdio>
using namespace std;

// Factorial - a simple recursion;

// int Factorial(int n)
// {
//     cout << "I am calculating F(" << n << ")\n";
//     if (n == 0)
//     {
//         return 1;
//     }
//     int F = n * Factorial(n - 1);
//     cout << "Done ! F(" << n << ") = " << F << "\n";
//     return F;
// }
// int main()
// {
//     int n;
//     cout << "Give me an n: ";
//     cin >> n;

//     int result = Factorial(n);
//     cout << result;
// }

//Iterative method - Fibonacci Sequence
// int Fib (int n) {
//     if (n<= 1) {
//         return n;
//     }
//     int F1, F2, F;
//     F1 = 0;
//     F2 = 1;
//     for (int i = 2; i <= n; i++) {
//         F = F1 + F2;
//         F1 = F2;
//         F2 = F;
//     }
//     return F;
// }
// int main() {
//     int n;
//     cout << "Give me an n: ";
//     cin >> n;
//     int result = Fib(n);
//     cout << result;
// }

// Recursive method - Fibonacci sequence;
// int Fib(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return Fib(n - 1) + Fib(n - 2);
// }
// int main() {
//     int n;
//     cout << "Give me an n: ";
//     cin>>n;
//     int result = Fib(n);
//     cout << result;
//     system("clear");
// }

//Recursion with memoization
int F[51];
int Fib(int n) {
    if(F[n] != -1) {
        return F[n];
    }
    F[n] = Fib(n-1) + Fib(n-2);
    return F[n];
}
int main() {
    for (int i = 0; i < 51; i++){
        F[i] = -1;
    }
    F[0] = 0;
    F[1] = 1;
    int n;
    cout<<"Give me an n: ";
    cin>>n;
    int result = Fib(n);
    cout << result;
    system("clear");
}
