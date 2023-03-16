#include<iostream>
using namespace std;
int main(){
/*    int n;
    cout<<"Enter the no of rows you want : " <<endl ;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << " * ";
            j = j+1;
    }
    cout<<endl;
    i= i+1;
    }
    */

/*
    int n;
    cout<<"Enter the no of rows you want : " <<endl ;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1; //if we will place j=i then right angle traingle figure will be made 
        while(j<=n){
            cout << i; 
            j = j+1;
    }
    cout<<endl;
    i= i+1;
    }
    */
/*
   int n;
   cin >>n;
   int i = 1;
   while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j;        //if we do cout j then it gives row with different value and 
                           //if we do cout i then it prints coloumn with different value and 
                          //if we cout n-j+1 the output will be in reverse order.
            j = j+1;
        }
        cout << endl;
        i=i+1;
   }
   */

  int n;
   cin >>n;
   int i = 1;
   while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1;  
            j = j+1;
        }
        cout << endl;
        i=i+1;
   }
}