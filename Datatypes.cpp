#include <iostream> // here include is used as a preprocessor directive and iostream is a header file used for taking inputs and outputs
using namespace std;// If you dont want to use std again and again with cout so you can write like this 
int main () // int main in a function where the excecution of code begins (mandatory in any program)
{ // it declares the start and the end of the function
    std::cout<<"hello I am Nikhil\n"<<endl; //here std::cout is used to display output under quotation marks and ';' semicolumn marks the end of the statement and here '\n' is used to add line break
    long a; //declares the  variable and data type
    cout<<"Enter the value of a = "<<endl;// used to display output in quotation marks
    cin>> a ; //takes inputs 
    cout<<"The value of a is :- "<<(a)<<endl; // '<<' is a insertion operator and '>>' extraction operator
    return 0;//exits the function
} //added the comment on this  sdffsadf