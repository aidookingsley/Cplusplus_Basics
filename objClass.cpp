#include <iostream>
using namespace std;
// class Book
// {
// public:
//     string title;
//     string author;
//     int pages;
// };

// int main()
// {
//     Book book1;
//     book1.title = "Harry Potter";
//     book1.author = "Adekyensroma Aidoo";
//     book1.pages = 500;

//     Book book2;
//     book2.title = "Lord of the Rings";
//     book2.author = "Nana Akua Ofosua";
//     book2.pages = 800;

//     cout << book1.title << endl;
//     cout << book1.author << endl;
//     cout << book2.author << endl;

//     return 0;
// }

// class Book
// {
// public:
//     string title;
//     string author;
//     int pages;
//     Book(string name){
//         cout << name << endl;
//     }
// };

// int main()
// {
//     Book book1("Harry Potter");
//     book1.title = "Harry Potter";
//     book1.author = "Adekyensroma Aidoo";
//     book1.pages = 500;

//     Book book2("Hunger Games");
//     book2.title = "Lord of the Rings";
//     book2.author = "Nana Akua Ofosua";
//     book2.pages = 800;

//     // cout << book1.title << endl;
//     // cout << book1.author << endl;
//     // cout << book2.author << endl;

//     return 0;
// }

class Book
{
public:
    string title;
    string author;
    int pages;
    Book()
    {
        title = "no author";
        author = "no author";
        pages = 0;
    }
    Book(string aTitle, string aAuthor, int aPages) //constructor
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};
int main()
{
    Book book1("Harry Potter", "Adekyensroma Aidoo", 500);
    Book book2("Hunger Games", "Kendra Ofosua", 700);
    Book book3;
    cout << book1.title << endl;
    cout << book2.author << endl;
    cout << book3.author << endl;

    return 0;
}