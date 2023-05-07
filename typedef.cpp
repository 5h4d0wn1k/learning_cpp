#include <iostream>
#include <vector>
//typedef and using keywords are use to create different names for datatypes
using namespace std;
typedef string stringint;
typedef int number;
using text = string;
using num = int;
using bat = bool ;
int main(){
    stringint firstname = "Nikhil Nagpure";
    number space = 159 ;
    text school = "Keshav";
    num age = 18;
    bat bro = true;
    
    cout<<firstname<<" "<<space<<" "<<school<<" "<<age<<" "<<bro<<" "<<endl;

    return 0;

}