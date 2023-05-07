#include<iostream>
using namespace std;
int main (){
    int age ;
    cout<<"Enter your age: ";
    cin>>age;
    if (age >= 18){
        cout << "You are allowed: ";
    }
    else if (age < 0){
        cout <<"You aren't even born yet: ";
    }
    else {
        cout << "You are not allowed";
    }
}