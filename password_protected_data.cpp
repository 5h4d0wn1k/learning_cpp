#include <iostream>
using namespace std;
int main () {
  do {string first_typed_password , re_typed_password ;
  cout<<"Set your password"<<endl;
  cin >> first_typed_password; 
  cout<<"Re enter your password"<<endl;
  cin>>re_typed_password;
  if (re_typed_password == first_typed_password){
  do { std::cout<<"hello I am Nikhil\n"<<endl; //here std::cout is used to display output under quotation marks and ';' semicolumn marks the end of the statement and here '\n' is used to add line break
    string g; //declares the  variable and data type
    cout<<"Enter the password for your information = "<<endl;// used to display output in quotation marks
    cin>> g ; //takes inputs 
    if ( g == first_typed_password ) {
    cout<<"Access granted"<<endl; // '<<' is a insertion operator and '>>' extraction operator
    int x;//declaration 
    x = 69;//assignment
    //int datatype , size = 4 bytes 
    int a = 56;
    int age = 18;
    //Double data type , size = 8 bytes , Stores fractional numbers
    double c = 10.56;
    double height = 5.11;
    //Char used for single character , size = 2 bytes
    char grades = 'A';
    char character = 'A';
    //boolean only contains (true or false), size = 1 bit
    bool b1 = true ; 
    bool student_attendance = true ;
    //string ( used to types sequence of texts or words and lines)
    string Name = "Nikhil Nagpure ";
    string Bottle_colour = " Red ";
    cout<<"Hello "<<Name<<
    "you are "<<age<<
    "year old \nyour height is "<<height<<
    "\nYour bottle colour is "<<Bottle_colour<<
    "\nYour attendence "<<student_attendance<<endl;
    return 0;//exits the function
    } else {
        cout<<"Your password is wrong"<<endl;
    }
   }
   while (true);
  }
  else {
    cout<<"Password_mismatched please enter again"<<endl;
  }
  } while (true);
}