//Program to calculate the space covered by a circular fountain
#include<iostream>
#include<iomanip>
int main(){
    float radius;
    float area;
    float pi=3.14;
    std::cout<<"Enter the radius of the fountain = ";
    std::cin>>radius;
    area= pi*radius*radius;
    std::cout<<"Area of the fountain = "<<area;
    return 0;
}