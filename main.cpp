#include <iostream>
#include <string>
using namespace std;

// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }

class Employee
{
public:
    string name;
    int salary;

    // constructor

    Employee(string n, int s, int p)
    {
        this->name = n;
        this->salary = s;
        this->password = p;
    }

    void emplyeeDetails()
    {
        cout << "The Name of our employee is " << this->name << " and the salary of employee is " << this->salary << "$." << endl;
    }

    void getPassword()
    {
        cout << "The password for employee is: " << this->password;
    }

private:
    int password;
};

int main()
{
    // cout << "Hello world!" << endl
    //      << endl;

    // data types and variables;

    // float a, b, c, d;
    // int card = 30;
    // long longdigit = 40.999;
    // double doubleDigit = 4.444098;
    // double const doubleDigit2 = 4.444098;
    // string myNameIs = "Hasaan Mumtaz";

    // a = 32.5;
    // b = 32.5;
    // c = 3;
    // d = 32.5;

    // cout << a + b + c + d << endl
    //      << endl;
    // cout << myNameIs << endl
    //      << endl;

    // taking user input

    // int a, b;
    // cout << "Enter First Number:" << endl;
    // cin >> a;
    // cout << "Enter Second Number:" << endl;
    // cin >> b;

    // operators

    // cout << "The sum is: "<< a + b << endl;
    // cout << "The minus is: "<< a - b << endl;
    // cout << "The multiply is: "<< a * b << endl;
    // cout << "The divide is: "<< a / b << endl;
    // cout << "The divide float is: "<< (float) a / b << endl;
    // cout << "The moduler is: "<< a % b;

    // if-else conditional statements

    // int age;
    // cout << "Enter your age:" << endl;
    // cin >> age;

    // if (age >= 150)
    // {
    //     cout << "Invalid age";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can vote";
    // }
    // else if (age <= 17)
    // {
    //     cout << "You can not vote, because you age is lower then 18, your age is" << age;
    // }
    // else
    // {
    //     cout << "Please Input age";
    // }

    // Switch statements;

    // switch (age)
    // {
    // case 12:
    //     cout<<"You are under 12";
    //     break;
    // case 18:
    //     cout<<"You are under 18";
    //     break;
    // case 20:
    //     cout<<"You are under 20";
    //     break;

    // default:
    //     cout<<"You are neither 12, 18, and nore 20";
    //     break;
    // }

    // Loops

    // int index = 0;

    // while loop
    // while (index < 34)
    // {
    //     cout << "We are at Number: " << index << endl;
    //     index = index + 1;
    // }

    // doWhile
    // do
    // {
    //     cout << "We are at Number: " << index << endl;
    //     index = index + 1;
    // } while (index < 23);

    // forLoop
    // int indexLength = 10;
    // for (int i = 0; i < indexLength; i++)
    // {
    //     cout << "We are at Number: " << i << endl;
    // }

    // Function

    // int a, b;
    // cout << "Enter First Number:" << endl;
    // cin >> a;
    // cout << "Enter Second Number:" << endl;
    // cin >> b;
    // cout << "Function returned: " << add(a, b) << endl;

    // Array

    // int arr2d[2][4] = {{1, 2, 5, 6}, {2, 4, 9, 7}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "the value at " << i << ", "<< j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // Typecasting

    // int a = 34;
    // float b = 65.999;
    // cout << "The integer number converting into the float number when we are divide " << (float)a / 4 << endl;
    // cout << "The float number converting into the integer number when we are divide " << (int)b / 4 << endl;

    // Strings

    // string name = "Muhammad Hasaan Mumtaz Mughal";
    // cout << "The name is: " << name << endl;
    // cout << "The Length of name is: " << name.length() << endl;
    // cout << "The sub string name is: " << name.substr(0, 9) << endl;
    // int collectingLastName = name.length() - 6;
    // cout << "The sub string name of last charcter is: " << name.substr(collectingLastName, 6) << endl;

    // Pointer Concepts

    // int a = 74;
    // int b = 74;
    // int *ptrga;
    // ptrga = &a;
    // cout << "the value of a is: " << a << endl;
    // cout << "the value of a is: " << *ptrga << endl;
    // cout << "the adress of a is: " << &a << endl;
    // cout << "the adress of b is: " << &b << endl;
    // cout << "the adress of a is: " << ptrga << endl;

    // Objects and classes
    // Classes are used for creating a template or blueprint of a conntext, function, plan or logics;
    // Objects are used to crete a value based property, who stored some value of that data that stored in him;
    Employee hasaan("Muhammad Hasaan Mumtaz (Developer)", 788, 897665743);
    // without constructor
    // hasaan.name = "Muhmmad Hasaan";
    // hasaan.salary = 56000;
    hasaan.emplyeeDetails();
    hasaan.getPassword();

    return 0;
}
