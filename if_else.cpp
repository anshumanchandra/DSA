#include<iostream>
using namespace std;
int main()

{

    //---------------positive and negative ------------------------


/*
int a;
cin>>a;
// cout << "the value of a is : "<< n << endl;
if (a>0)
{
    cout<<"a is positive"<<endl;
}
else{
    cout<< "a is negative"<<endl;
}*/


//--------------------------greater or smaller-------------------------------


/*
int a,b;
cout<<"Enter the value of a : "<< endl;
cin>>a;
cout<<"Enetr the value of b : "<< endl;
cin>>b;
if(a>b){
    cout<<"A is greater than b" << endl;
}
if(a<b){
    cout<<"A is smaller than b" << endl;
}*/


//---------------------------+ve, -ve or zero(if else if )----------------------------------


/*
int a;
cout<<"Enter any number : ";
cin>>a;
if(a>0){
    cout<<"a is +ve number"<< endl;
}
else{
    if(a<0){
    cout<<"a is -ve number"<< endl;
    }
    else{
    cout<<"The number is 0";
    }
}*/


//-------------------------------if, elseif, else-------------------------------------------------


int a;
cout<<"Enetr any number : "<<endl;
cin>>a;
if(a>0){
    cout<<"The number is +ve" << endl;
}
else if(a<0){
    cout<<"The number is -ve" <<endl;
}
else{
    cout<<"The number is 0" << endl;
}
}