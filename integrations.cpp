#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int degree;
    float a[10],b , x , y ,a , g;
    cout<<"define the degree of polynomial = ";
    cin>>degree;
    cout<<"Define polynomial constant ";
    for(int i = 0; i <= degree ; i++){
        cout<<"input value for a["<< i <<"]:";
        cin >> a[i];
    }
    cout << "Input integration range: ";
    cin >> x;
    cout<<"Input integration range to ";
    cin >> y;
    cout<<" f(x)  = ";
    for (int i = 0 ; i <= degree; i++){
        if (i == 0){
            cout<<a[i]<< " + ";
        }
        else if (i == degree){
        cout<<a[i]<<"*x^"<< i << endl;
        }
        else {
        cout<<a[i]<<"*x^"<< i << " + ";
        }
    }
    int num_p = 100;
    float p = (b-1)/100;

    float x[101];
    float y[101];

    for(int i =0; i <= num_p; i++){
        x[i] = a = i * p;
        for (int j = o; j <= degree ; j  ++){
            y[i] += A[j] * pow(x[i]), j);
        }
    }

}
//define the degree of the polynomial
//define the polynomial constants
//define integration from x = a to x = b
//contruct polynomial
//do the integration
//printout the results
