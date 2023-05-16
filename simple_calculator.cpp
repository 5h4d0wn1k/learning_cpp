#include<iostream>
using namespace std ; 
int main(){
    
    char operation;
    double x;
    double y;
    double output;
    cout<<"CALCULATOR \n"; 
    cout << "Choose one operation (+ , * , / , -):- \n";
    cin>>operation;
    cout << "Enter first number :- \n";
    cin>>x;
    cout << "Enter Second Number :- \n";
    cin>>y;
    switch (operation){
        case '+':
         output = x + y;
         cout<<"X + Y = "<<output;
        break;
        case '*':
         output = x * y;
         cout<<"X + Y = "<<output;
        break;
        case '-':
         output = x - y;
         cout<<"X - Y = "<<output;
        break;
        case '/':
         output = x / y;
         cout<<"X / Y = "<<output;
        break;
        }

}