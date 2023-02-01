#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// int main()
// {
//     // cout << "Hello World!\n";
//     // cout << "My name is Kojo" << endl;
//     // cout << "Today is Saturday";

//     // float annualSalary = 50000.99;
//     // float monthlySalary = annualSalary / 12;
//     // cout << "Your monthly salary is: " << monthlySalary;

//     // float annualSalary ;
//     // cout << "Please enter your annual salary: ";
//     // cin >> annualSalary;
//     // float monthlySalary = annualSalary / 12;
//     // cout << "Your monthly salary is: " << monthlySalary;

//     // int yearOfBirth = 1995;
//     // char gender = 'f';
//     // bool isOlderThan18 = true;
//     // float averageGrade = 4.5;
//     // double balance = 456789458567;

//     // cout << "Size of int is " << sizeof(int) << " bytes\n";
//     // cout << "Int min value is " << INT_MIN << endl;
//     // cout << "Int max value is " << INT_MAX << endl;
//     // cout << "Size of unsigned int is " << sizeof(unsigned int) << "  bytes\n";
//     // cout << "UInt max value is " << UINT_MAX << endl;
//     // cout << "Size of bool is " << sizeof(bool) << " bytes\n";
//     // cout << "Size of char is " << sizeof(char) << " bytes\n";
//     // cout << "Size of float is " << sizeof(float) << " bytes\n";
//     // cout << "Size of double is " << sizeof(double) << " bytes\n";

//     // DATATYPE OVERFLOW;
//     // int intMax = INT_MAX;
//     // cout << intMax << endl;
//     // cout << intMax + 1;

//     // cout << (int)'a' << endl;
//     // cout << int('a') << endl;
//     // cout << int('A') << endl;
//     // cout << char(65) << endl;

//     // char c1, c2, c3, c4, c5;
//     // cout << "Enter 5 letters: ";
//     // cin >> c1 >> c2 >> c3 >> c4 >> c5;
//     // cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);

//     // int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
//     // cout << "Enter any 12 digits(1-127) each digit followed by a space:";
//     // cin >> n0 >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10 >> n11;
//     // cout << "ASCII Message: " << char(n0) << char(n1) << char(n2) << char(n3) << char(n4) << char(n5) << char(n6) << char(n7) << char(n8) << char(n9) << char(n10) << char(n11) << endl;

//     // variable = (condition) ? true : false;

//     // int largestNum = (5 > 2) ? 5 : 2; // ternary operators;

//     // cout << largestNum << endl;

//     // int myFavNums[5];
//     // int badNums[5] = {4, 13, 14, 24, 34};
//     // cout << "Bad Number 1: " << badNums[0] << endl;

//     // char myName[5][5] = {
//     //     {'D', 'e', 'r', 'e', 'k'},
//     //     {'B', 'a', 'n', 'a', 's'}};

//     // cout << "2nd letter in 2nd array " << myName[1][1] << endl;

//     // myName[0][2] = 'e';
//     // cout << "New Value " << myName[0][2] << endl;

//     // RANDOM NUMBER GENERATOR
//     //  int randNum = (rand() % 100) + 1;

//     // while (randNum != 100)
//     // {
//     //     cout << randNum << ", ";
//     //     randNum = (rand() % 100) + 1;
//     // }
//     // cout << endl;

//     // DO WHILE LOOP
//     //  string numberGuessed;
//     //  int intNumberGuessed = 0;

//     // do
//     // {
//     //     cout << "Guess between 1 and 10: ";
//     //     getline(cin, numberGuessed);
//     //     intNumberGuessed = stoi(numberGuessed);
//     //     cout << intNumberGuessed << endl;
//     // } while (intNumberGuessed != 4);
//     // cout << "You win" << endl;

//     // char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
//     // string birthdayString = "Birthday";

//     // cout << happyArray + birthdayString << endl;
//     // string yourName;
//     // cout << "What is your name ";
//     // getline(cin, yourName);

//     // cout << "hello " << yourName << endl;

//     // double eulersConstant = .57721;
//     // string eulerGuess;
//     // double eulerGuessDouble;

//     // cout << "What is Euler's Constant? ";
//     // getline(cin, eulerGuess);

//     // eulerGuessDouble = stod(eulerGuess);
//     // if (eulerGuessDouble == eulersConstant)
//     // {
//     //     cout << "You are right" << endl;
//     // }
//     // else
//     // {
//     //     cout << "You are wrong" << endl;
//     // }
//     // cout << "Size of String " << eulerGuess.size() << endl;
//     // cout << "Is string empty " << eulerGuess.empty() << endl;
//     // cout << eulerGuess.append(" was your guess") << endl;

//     // string yourName;
//     // cout << "What is your name ";
//     // getline(cin, yourName);

//     // cout << "hello " << yourName << endl;

//     // string dogString = "dog";
//     // string catString = "cat";

//     // cout << dogString.compare(catString) << endl;
//     // cout << dogString.compare(dogString) << endl;
//     // cout << catString.compare(dogString) << endl;

//     // STRINGS

//     // string yourName;
//     // cout << "What is your name ";
//     // getline(cin, yourName);

//     // cout << "hello " << yourName << endl;

//     // string wholeName = yourName.assign(yourName);
//     // cout << wholeName << endl;

//     // string firstName = wholeName.assign(wholeName, 0, 4);
//     // cout << firstName << endl;

//     // int lastNameIndex = yourName.find("Kojo", 0);
//     // cout << "Index for last name " << lastNameIndex << endl;

//     // yourName.insert(5, "Adekyensroma ");
//     // cout << yourName << endl;

//     // yourName.erase(0, 4);
//     // cout << yourName << endl;

//     // yourName.replace(13, 10, " Kadosh");
//     // cout << yourName << endl;

//     // VECTORS

//     // vector<int> lotteryNumVect(10);

//     // int lotteryNumArray[5] = {4, 13, 14, 24, 34};

//     // lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);

//     // lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);

//     // cout << lotteryNumVect.at(5) << endl;
//     // lotteryNumVect.push_back(64);
//     // cout << "Final Value " << lotteryNumVect.back() << endl;
//     // cout << "First Value " << lotteryNumVect.front() << endl;
//     // cout << "Size " << lotteryNumVect.max_size() << endl;
//     // lotteryNumVect.pop_back();
// }

// FACTORIAL
//  int getFactorial(int number)
//  {
//      int sum;
//      if (number == 1)
//          sum = 1;
//      else
//          sum = getFactorial(number - 1) * number;
//      return sum;
//  }

// int main()
// {

//     cout << "The factorial of 6 is " << getFactorial(6) << endl;

//     return 0;
// }
// FILE I/O;
// int main()
// {

//     string steveQuote = "A day without light is like, you know, night";
//     ofstream writer("stevequote.txt");

//     if (!writer)
//     {
//         cout << "Error opening file" << endl;
//         return -1;
//     }
//     else
//     {
//         writer << steveQuote << endl;
//         writer.close();
//     }
//     ofstream writer2("stevequote.txt", ios::app);
//     if (!writer2)
//     {
//         cout << "Error opening file" << endl;
//         return -1;
//     }
//     else
//     {
//         writer2 << "\n -Steve Martin " << endl;
//         writer2.close();
//     }
//     char letter;

//     ifstream reader("stevequote.txt");

//     if (!reader)
//     {
//         cout << "Error opening file" << endl;
//         return -1;
//     }
//     else
//     {
//         for (int i = 0; !reader.eof(); i++)
//         {
//             reader.get(letter);
//             cout << letter;
//         }
//         cout << "stevequote.txt" << endl;
//         cout << endl;
//         reader.close();
//     }
//     return 0;
// }

// EXCEPTION HANDLING
//  int main()
//  {
//      int number = 0;

//     try
//     {
//         if (number != 0)
//         {
//             cout << 2 / number << endl;
//         }
//         else
//             throw(number);
//     }
//     catch (int number)
//     {
//         cout << number << " is not valid" << endl;
//     }
// }

// POINTERS;
// void makeMeYoung(int *age)
// {
//     cout << "I used to be " << *age << endl;
//     *age = 21;
// }
// void actYourAge(int &age) {
//     age = 39;
// }

// int main()
// {
//     int myAge = 39;

//     int *agePtr = &myAge;

//     // cout << "Address of pointer " << agePtr << endl;

//     // cout << "Data at memory address " << *agePtr << endl;

//     // int badNums[5] = {4, 13, 14, 24, 34};
//     // int *numArrayPtr = badNums;

//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
//     // numArrayPtr++;
//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
//     // numArrayPtr++;
//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
//     // numArrayPtr++;
//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
//     // numArrayPtr++;
//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
//     // numArrayPtr++;
//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
//     // numArrayPtr++;
//     // cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

//     // An array name is just a pointer to the array.
//     cout << "Address " << badNums << " Value " << *badNums << endl;

//     makeMeYoung(&myAge);

//     cout << "I'm " << myAge << " years old now" << endl;

//     int &ageRef = myAge;

//     cout << "myAge : " << myAge << endl;

//     ageRef++;

//     cout << "myAge : " << myAge << endl;

//     actYourAge(ageRef);

//     cout << "myAge : " << myAge << endl;

//     return 0;
// }

// class Animal
// {
// private:
//     int height;
//     int weight;
//     string name;

//     static int numOfAnimals;

// public:
//     int getHeight() { return height; }
//     int getWeight() { return weight; }
//     string getName() { return name; }
//     void setHeight(int cm) { height = cm; }
//     void setWeight(int kg) { weight = kg; }
//     void setName(string animalName) { name = animalName; }

//     // void setAll(int, int, string);

//     Animal(int, int, string);

//     ~Animal();

//     Animal();

//     static int getNumOfAnimals() { return numOfAnimals; }

//     void toString();
// };

// int Animal::numOfAnimals = 0;

// // void Animal::setAll(int height, int weight, string name){
// //     this->height = height;
// //     this->weight = weight;
// //     this->name = name;
// //     Animal::numOfAnimals++;
// // }

// // CONSTRUCTORS
// Animal::Animal(int height, int weight, string name)
// {
//     this->height = height;
//     this->weight = weight;
//     this->name = name;
//     Animal::numOfAnimals++;
// }

// Animal::~Animal()
// {
//     cout << "Animal " << this->name << " destroyed" << endl;
// }

// // OVERLOAD CONSTRUCTOR;

// Animal::Animal()
// {
//     Animal::numOfAnimals++;
// }
// void Animal::toString()
// {
//     cout << this->name << " is " << this->height << " cms tall and "
//          << this->weight << " kgs in weight" << endl;
// }
// class Dog : public Animal
// {
// private:
//     string sound = "Woof";

// public:
//     void getSound() { cout << sound << endl; }

//     Dog(int, int, string, string);

//     Dog() : Animal(){};

//     void toString();
// };

// Dog::Dog(int height, int weight, string name, string bark) : Animal(height, weight, name)
// {
//     this->sound = bark;
// }

// void Dog::toString()
// {
//     cout << this->getName() << " is " << this->getHeight() << " cms tall and " << this->getWeight() << " kgs in weight and says "
//          << this->sound << endl;
// }

// int main()
// {
//     Animal fred;

//     fred.setHeight(33);
//     fred.setWeight(10);
//     fred.setName("Fred");

//     cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
//          << fred.getWeight() << " kgs in weight" << endl;

//     Animal tom(36, 15, "Tom");

//     cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
//          << tom.getWeight() << " kgs in weight" << endl;

//     Dog spot(38, 16, "Spot", "Woof");

//     cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

//     spot.getSound();

//     tom.toString();
//     spot.toString();

//     spot.Animal::toString();

//     return 0;
// }

// VIRTUAL METHODS & POLYMORPHISM
// class Animal
// {
// public:
//     void getFamily() { cout << "We are animals" << endl; }

//     virtual void getClass() { cout << "I'm an Animal" << endl; }
// };

// class Dog : public Animal
// {
// public:
//     void getClass() { cout << "I'm a Dog" << endl; }
// };

// class GermanShepard : public Dog
// {
// public:
//     void getClass() { cout << "I'm a German Shepard" << endl; }
//     void getDerived() { cout << "I'm an Animal and Dog" << endl; }
// };

// void whatClassAreYou(Animal *animal)
// {
//     animal->getClass();
// }

// int main()
// {
//     Animal *animal = new Animal;
//     Dog *dog = new Dog;

//     animal->getClass();
//     dog->getClass();

//     whatClassAreYou(animal);
//     whatClassAreYou(dog);

//     Dog spot;
//     GermanShepard max;

//     Animal *ptrDog = &spot;
//     Animal *ptrGShepard = &max;

//     ptrDog->getFamily();

//     ptrDog->getClass();

//     ptrGShepard->getFamily();

//     ptrGShepard->getClass();

//     return 0;
// }

class Animal
{
public:
    virtual void makeSound() { cout << "The Animal says grr" << endl; }
};

class Dog : public Animal
{
public:
    void makeSound() { cout << "The Dog says woof" << endl; }
};

class Cat : public Animal
{
public:
    void makeSound() { cout << "The Cat says meow" << endl; }
};
class Car
{
public:
    virtual int getNumWheels() = 0;
    virtual int getNumDoors() = 0;
};

class StationWagon : public Car
{
public:
    int getNumWheels() { cout << "Station wagon has 4 wheels" << endl; }
    int getNumDoors() { cout << "Station wagon has 4 doors" << endl; }
    StationWagon() {}
    ~StationWagon();
};

int main()
{
    Animal *pCat = new Cat;
    Animal *pDog = new Dog;

    pCat->makeSound();
    pDog->makeSound();

    Car *stationWagon = new StationWagon();

    stationWagon->getNumWheels();

    return 0;
}