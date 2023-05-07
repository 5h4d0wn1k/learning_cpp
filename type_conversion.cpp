#include<iostream>
using namespace std;
int main(){
    // type conversion is basically used when you 
    // want to change the data type inside a data type
// for example

char x = 100;//implicit example
cout<<x<<endl;
cout<<(char)100<<endl;//explicit example

int time = 600;
int age = 1000;
double core = (double)time /(double) age * 100 ; 
cout<<core<<"%";
return 0;
}