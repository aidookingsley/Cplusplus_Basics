#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
string str;
int number;
char letter;

int main()
{
    inFile.open("combined.txt");
    if (inFile.fail())
        cout << endl
             << "File not found!" << endl;
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            cout << str << endl;
        }
        inFile.close();
    }
    return 0;
}