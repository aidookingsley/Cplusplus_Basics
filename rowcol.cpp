#include <iostream>
using namespace std;
int main()
{ /*Variables decleration and initialization.*/
    int t{0}, n{0}, m{0};
    int max_border{0};      /*For final value of maximum boder.*/
    int temp_max_border{0}; /*For vaue of maximum border row wise.*/
    int check{0};           /*for checking whether last cell was black or not.*/
    char black = '#';       /*Input for no. of test cases.*/
    cin >> t;               /*Declaring a array to hold input.*/
    char arr[1000][1000];   /*Declaring an array to hold maximum border column wise.*/
    int position_holder[1000];
    while (t > 0)
    { /*Input for array size.*/
        cin >> n >> m;
        max_border = 0; /*storing table data in array "arr" and initializing array position_holder to zero.*/
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (i == 0)
                    position_holder[j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            temp_max_border = check = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == black)
                { /*Code to find maximum border row wise.*/
                    if (check != 0)
                        temp_max_border++;
                    else
                        temp_max_border = check = 1; /*code to find maximum border column wise.*/
                    if (position_holder[j] != 0)
                        position_holder[j]++;
                    else
                        position_holder[j] = 1;
                }
                else
                {
                    check = 0;
                    position_holder[j] = 0;
                    if (max_border < temp_max_border)
                        max_border = temp_max_border;
                }
                /*code to compare max_border with temp_max_border to check which is greater and using that value*/
                if (max_border < temp_max_border)
                    max_border = temp_max_border;
            }
        } /*code to compare max_border with positon_holder array   to check which is greater and using that value*/
        for (int temp = 0; temp < m; temp++)
            if (position_holder[temp] > max_border)
                max_border = position_holder[temp]; /*Output*/
        cout << max_border << endl;                 /*decrementintg number of test case by 1.*/
        --t;
    }
    return 0;
}