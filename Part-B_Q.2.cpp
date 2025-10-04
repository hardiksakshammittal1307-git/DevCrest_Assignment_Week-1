#include<iostream>
using namespace std;

int main(){
    float length,breadth,area_of_circle,perimeter_of_rectangle,radius,area_of_rectangle,circumference,pi=3.14;
    cout<<"Enter length of rectangle"<<endl;
    cin>>length;
    cout<<"Enter breadth of rectangle"<<endl;
    cin>>breadth;
    cout<<"Enter radius of circle"<<endl;
    cin>>radius;
    perimeter_of_rectangle=2*(length+breadth);
    area_of_rectangle=length*breadth;
    area_of_circle=pi*radius*radius;
    circumference=2*pi*radius;
    cout<<"perimeter of rectangle is: "<<perimeter_of_rectangle<<endl;
    cout<<"area of rectangle is: "<<area_of_rectangle<<endl;
    cout<<"circumference of circle is: "<<circumference<<endl;
    cout<<"area of circle is: "<<area_of_circle<<endl;
return 0;
}