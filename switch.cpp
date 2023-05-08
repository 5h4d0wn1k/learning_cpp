#include<iostream>
using namespace std;
int main (){
    int a , b , c , d , e , f ;
    double percentage;
    cout<< "Enter marks of Sanskrit: = ";
    cin>>a;
    cout<< "Enter marks of hindi: = ";
    cin>>b;
    cout<< "Enter marks of English = ";
    cin>>c;
    cout<< "Enter marks of Science: = ";
    cin>>d;
    cout<< "Enter marks of Maths: = ";
    cin>>e;
    cout<< "Enter marks of Social science: = ";
    cin>>f;
    percentage = ((a+b+c+d+e+f)*100)/600;
    cout<<percentage;
    //USING switch case
    int grade;
    switch(int(percentage/10)) {
        case 10:
        case 9:
            grade = 1;
            break;
        case 8:
            grade = 2;
            break;
        case 7:
            grade = 3;
            break;
        case 6:
            grade = 4;
            break;
        case 5:
        case 4:
            grade = 5;
            break;
        default:
            grade = 6;
            break;
    }
    
    switch(grade) {
        case 1:
            cout << "You've got S grade." << endl;
            break;
        case 2:
            cout << "You've got A grade." << endl;
            break;
        case 3:
            cout << "You've got B grade." << endl;
            break;
        case 4:
            cout << "You've got C grade." << endl;
            break;
        case 5:
            cout << "You've got D grade." << endl;
            break;
        case 6:
            cout << "You've got F grade." << endl;
            break;
    }
    // a 
    //Same question using if else
    if (percentage >= 90 && percentage <= 100) {
        cout << "You've got S grade." << endl;
    } else if (percentage >= 80 && percentage < 90) {
        cout << "You've got A grade." << endl;
    } else if (percentage >= 60 && percentage < 80) {
        cout << "You've got B grade." << endl;
    } else if (percentage >= 40 && percentage < 60) {
        cout << "You've got C grade." << endl;
    } else if (percentage >= 33 && percentage < 40) {
        cout << "You've got D grade." << endl;
    } else if (percentage >= 0 && percentage < 33) {
        cout << "You've got F grade." << endl;
    } else {
        cout << "Invalid percentage entered." << endl;
    }

    return 0;

}