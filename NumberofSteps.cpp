#include <iostream>
using namespace std;
int printSteps(int arr1[], int arr2[], int n, int cnt, int min)
{
    for (int i = 0; i < n; i++)
    {
        while (arr1[i] > min)
        {
            arr1[i] -= arr2[i];
            cnt++;
        }
        if (arr1[i] < min)
        {
            min = arr1[i];
            i = -1;
        }
        else if (arr1[i] < 0)
            return -1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr1[i] ^ arr1[i + 1])
            return -1;
    }
    return cnt;
}

int main()
{
    int n, min = 10000, cnt = 0;

    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        if (min < arr1[i])
            min = arr1[i];
    }
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    cout << printSteps(arr1, arr2, n, cnt, min);
}