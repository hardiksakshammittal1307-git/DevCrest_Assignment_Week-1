#include<iostream>
using namespace std;

int main(){
    float marks1,marks2,marks3,marks4,marks5,total,percentage;
    
    // Please Enter Marks Out of 100

    cout<<"Enter the marks of subject 1: "<<endl;
    cin>>marks1;
    cout<<"Enter the marks of subject 2: "<<endl;
    cin>>marks2;
    cout<<"Enter the marks of subject 3: "<<endl;
    cin>>marks3;
    cout<<"Enter the marks of subject 4: "<<endl;
    cin>>marks4;
    cout<<"Enter the marks of subject 5: "<<endl;
    cin>>marks5;

    total=marks1+marks2+marks3+marks4+marks5;
    percentage=(total/500)*100;
    cout<<"Total Marks Obtained out of 500: "<<total<<endl<<"Percentage Obtained: "<<percentage<<"%"<<endl;

    if (percentage>=95){
        cout<<"Grade Obtained: "<<"'A+'"<<endl;
    }
    else if ((percentage>=90) && (percentage<=94)){
        cout<<"Grade Obtained: "<<"'A'"<<endl;
    }
    else if ((percentage>=85) && (percentage<=89)){
        cout<<"Grade Obtained: "<<"'B+'"<<endl;
    }
    else if ((percentage>=80) && (percentage<=84)){
        cout<<"Grade Obtained: "<<"'B'"<<endl;
    }
    else if ((percentage>=75) && (percentage<=79)){
        cout<<"Grade Obtained: "<<"'C+'"<<endl;
    }
    else if ((percentage>=70) && (percentage<=74)){
        cout<<"Grade Obtained: "<<"'C'"<<endl;
    }
    else if ((percentage>=65) && (percentage<=69)){
        cout<<"Grade Obtained: "<<"'D+'"<<endl;
    }
    else if ((percentage>=60) && (percentage<=64)){
        cout<<"Grades Obtained: "<<"'D'"<<endl;
    }
    else {
        cout<<"You Got Failed With A Grade OF: "<<"'F'"<<endl;
    }
return 0;
}