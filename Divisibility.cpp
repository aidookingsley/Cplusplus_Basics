#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    long data[N];
    for (int i = 0; i < N; i++)
        cin >> data[i];
    // check if the number is divisible by 10
    if (data[N - 1] % 10)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}