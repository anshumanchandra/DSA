#include <iostream>

using namespace std;

int main (){
    char a;
    cout<<"Enetr anything : "<<endl;
    cin>>a;
    if(a >= 'a' && a<='z'){
        cout<<"The entered value is small alphabet" << endl;
}
if(a >='A' && a<='Z'){
    cout<<"The entered value is capital alphabet" <<endl;
}
else if(a >= '1' && a<= '9')
{
    cout<<"The entered value is numeric" << endl;
}
}