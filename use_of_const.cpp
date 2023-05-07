#include <iostream>
using namespace std;
int main(){
    const double height = 1080;
    const int width = 1920;//here we cannot change the value of widths because we added const
    cout<<"Resolution = "<<width<<" X "<<height;
    return 0;
}