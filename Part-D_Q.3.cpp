#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c,N,i=3;
    cout<<"Enter The Value Of N"<<endl;
    cin>>N;
    cout<<a<<endl<<b<<endl;

    while(i<=N){
    c=a+b;
    cout<<c<<endl;
    a=b,b=c;
    i++;
    }
return 0;
}