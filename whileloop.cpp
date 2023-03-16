#include <iostream>
using namespace std;
int main (){
  /*  int a;
    cout<<"enter the value of a"<<endl;
    cin >> a;
    int i = 1;
    while(i<=a){
        cout << i <<endl;
        i =i+1;

    } 


*/

// -----------------------------sum of no of terms-----------------------------------

/*int a, sum=0, i=1;
cout<<"enter the value : " << endl;
cin>>a;
while(i<=a){
sum = sum+i;
i = i+1;
}
cout<<"the value of sum of all a term is : " << sum;

}*/

// -----------------------sum of all even numbers-----------------------------------

    int a, sum =0;
    cout<<"enter the value : "<<endl;
    cin>>a;
    int i = 0;
    while (i<=a){
        sum = sum+i;
        i = i+2;
    }
    cout<<"The sum of all even numbers is : "<< sum<<endl;
}