#include<iostream>
using namespace std ; 
int main(){
    string name, room_no, block;
    string height;
    cout<<"Whats your name = ";//normal way of talking input
    cin>>name;
    cout<<"Whats your height = ";
    cin>>height;
    
    cout<<"Whats you room no = ";
    getline(cin>>ws, room_no);//used for input with spaces for ex name and surname together
    cout<<"Your are from which block ? ";
    getline(cin>>ws, block);

    cout<<"Hello "<<name<<'\n';
    cout<<"Your height is "<<height<<'\n';
    cout<<"Room number = "<<room_no<<'\n';
    cout<<"Your block name is = "<<block<<'\n';

    return 0;
    
}