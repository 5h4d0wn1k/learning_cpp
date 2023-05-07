#include<iostream>
#include<cmath>
using namespace std ; 
int main(){
    double g, h , i,output8, output9 ,output6 , output7, output1, output2 , output3 , output4 , output5 ;
    cout<<"Enter value of g = ";
    cin>>g;
    cout<<"Enter value of h = ";
    cin>>h;
    cout<<"Enter value of i = ";
    cin>>i;

    output1 = max(g , h );
    output2 = min(g , h );
    output3 = pow(g , h);
    output4 = pow(h , i);
    output5 = sqrt(h);
    output6 = abs(g);
    output7 = round(i);
    output8 = ceil(h);
    output9 = floor(g);

    cout<<output1<<", "<<output2 <<", "<< output3 <<", "<< output4 <<", "<< output5 <<", "<< output6 <<", "<< output7 <<", "<< output8 <<", "<< output9 ;
    return 0;


}