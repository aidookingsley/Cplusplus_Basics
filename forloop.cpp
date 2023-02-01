#include <iostream>
using namespace std;
// int main()
// {
//     // int index = 1;
//     // while (index <= 5)
//     // {
//     //     cout << index << endl;
//     //     index++;
//     // }
//     // int nums[] = {1, 2, 5, 7, 3};
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << nums[i] << endl;
//     // }
// // }
int power(int baseNum, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result *= baseNum;
    }
    return result;
}
int main()
{
    cout << power(7, 3) << endl;

    return 0;
}
