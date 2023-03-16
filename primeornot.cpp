#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any value : ";
    cin>>n;
    int i = 2;
    while(i<n){
        // devide ho gya to prime
        if(n%i==0){
        cout<< "It is prime for : "<<i << endl;
    }
    else{
        cout << "It is not prime for : "<<i << endl;
    }
    i = i+1;
    }
}