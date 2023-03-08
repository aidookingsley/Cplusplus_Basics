#include <iostream>
using namespace std;

int main()
{
    char word[20];
    int z = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> word[i];
        if (word[i] == 'z')
            z++;
    }
    int x = z + 2 * z;

    if (word[x] == 'o')
        cout << "No";
    else if (word[x - 1] == 'o')
        cout << "Yes";
    else
        cout << "No";
}