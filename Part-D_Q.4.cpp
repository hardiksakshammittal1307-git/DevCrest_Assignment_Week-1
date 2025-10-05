#include<iostream>
using namespace std;

int main(){
    int N,R=0;
    cout<<"Enter The Number To Revert"<<endl;
    cin>>N;

    while(N>0){
    R=R*10+N%10;
    N=N/10;
    }
    cout<<"The Reverted Number is: "<<R<<endl;
    
    if(N==R){
        cout<<"Number is a Palindrome"<<endl;
    }
    else{
        cout<<"Number is not a Palindrome"<<endl;
    }
return 0;
}