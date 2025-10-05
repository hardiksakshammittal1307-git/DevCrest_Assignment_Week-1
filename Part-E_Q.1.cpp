#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"The Number is Prime"<<endl;
    }
    else{
        cout<<"The Number is Not a Prime Number"<<endl;
    }
return 0;
}