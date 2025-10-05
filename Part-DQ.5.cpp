#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int s=1; s<=n; s++){
    for(int m=1; m<=n; m++){
        cout<<"* ";
    }
    cout<<endl;
}

cout<<endl;

for(int j=1; j<=n; j++){
    for(int i=1; i<=j; i++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}