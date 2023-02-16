#include <iostream>
#include <fstream>
#include <vector>
#include "records.hpp"

using namespace std;

void initialize();
void initialize(ifstream &);

StudentRecords SR;
int id;
ifstream inFile;
ofstream outFile;

int main()
{
    initialize(inFile);      // initialize();
    SR.report_file(outFile); // SR.report_card(1, cout);
    return (0);
}

void initialize(ifstream &inFile)
{
    string str, name;
    int sid, cid;
    unsigned char credits;
    char grade;
    int count = 0;
    inFile.open("students.txt");
    if (inFile.fail())
        cout << endl
             << "File students.txt not found! " << endl;
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            // sid = stoi(str);
            getline(inFile, name);
            SR.add_student(sid, name);
            count++;
        }
        inFile.close();
        cout << "Found " << count << " students" << endl;
    }
    count = 0;
    inFile.open("courses.txt");
    if (inFile.fail())
        cout << endl
             << "File courses.txt not found!" << endl;
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            // cid = stoi(str);
            getline(inFile, name);
            getline(inFile, str);
            // credits = stoi(str);
            SR.add_course(cid, name, credits);
            count++;
        }
        inFile.close();
        cout << "Found " << count << " courses" << endl;
    }
    count = 0;
    inFile.open("grades.txt");
    if (inFile.fail())
        cout << endl
             << "File grades.txt not found!" << endl;
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            // sid = stoi(str);
            getline(inFile, str);
            // cid = stoi(str);
            getline(inFile, str);
            grade = str[0];
            SR.add_grade(sid, cid, grade);
            count++;
        }
        inFile.close();
        cout << "Found " << count << " grades" << endl;
    }
}

void initialize()
{
    SR.add_student(1, "George Buyden");
    SR.add_student(2, "Nancy Bowen");
    SR.add_student(3, "Natalie Portsdun");
    SR.add_student(4, "Tyrell Buchanan");
    SR.add_student(5, "Adekyensroma Oduahoma");

    SR.add_course(1, "Algebra", 5);
    SR.add_course(2, "Physics", 4);
    SR.add_course(3, "English", 3);
    SR.add_course(4, "Economics", 4);
    SR.add_course(5, "Chemistry", 4);
    SR.add_course(6, "Computing", 3);
    SR.add_course(7, "Mathematics", 4);
    SR.add_course(8, "Astronomy", 4);
    SR.add_course(9, "French", 3);
    SR.add_course(10, "Biology", 4);

    SR.add_grade(1, 1, 'B');
    SR.add_grade(1, 2, 'A');
    SR.add_grade(1, 6, 'C');
    SR.add_grade(2, 7, 'A');
    SR.add_grade(2, 8, 'A');
    SR.add_grade(2, 4, 'B');
    SR.add_grade(3, 4, 'B');
    SR.add_grade(3, 7, 'A');
    SR.add_grade(3, 3, 'C');
    SR.add_grade(4, 6, 'A');
    SR.add_grade(4, 8, 'A');
    SR.add_grade(4, 9, 'B');
    SR.add_grade(5, 5, 'A');
    SR.add_grade(5, 7, 'A');
    SR.add_grade(5, 10, 'A');
}