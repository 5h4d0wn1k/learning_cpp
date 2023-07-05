#include <iostream>
using namespace std;
int main()
{
    int x;  // declaration
    x = 69; // assignment
    // int datatype , size = 4 bytes
    int a = 56;
    int age = 18;
    // Double data type , size = 8 bytes , Stores fractional numbers
    double c = 10.56;
    double height = 5.11;
    // Char used for single character , size = 2 bytes
    char grades = 'A';
    char character = 'A';
    // boolean only contains (true or false), size = 1 bit
    bool b1 = true;
    bool student_attendance = true;
    // string ( used to types sequence of texts or words and lines)
    string Name = "Nikhil Nagpure ";
    string Bottle_colour = " Red ";

    cout << "Hello " << Name << "you are " << age << "year old \nyour height is " << height << "\nYour bottle colour is " << Bottle_colour << "\nYour attendence " << student_attendance << endl;
    return 0;
}