#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number to Check whether it's even or odd "<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"The Number "<<num<<" is even "<<endl;
    }
    else {
        cout<<"The Number "<<num<<" is odd "<<endl;
    }
return 0;
}