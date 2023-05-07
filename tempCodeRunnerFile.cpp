#include<iostream>
using namespace std;
int main(){
    // type conversion is basically used when you 
    // want to change the data type inside a data type
// for example
int age = 18; 
int year = 2004;
double ans = age/year *100;
cout<<"Ans = "<<ans<<"%"; //we will get 0% here because of the different datatype inside different data type

int age = 18; 
int year = 2004;
double ans = age/(double)year *100;
cout<<"Ans = "<<ans<<"%"; // here we have converted the type here we will get answer

return 0;
}