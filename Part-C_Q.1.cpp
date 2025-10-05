#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter the value of numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if ((num1>num2) && (num1>num3)){
        cout<<"num1 is largest among all three numbers"<<endl;
    }
    else if (num2>num3){
        cout<<"num2 is largest among all three numbers"<<endl;
    }
    else {
        cout<<"num3 is largest among all three numbers"<<endl;
    }
return 0;
}