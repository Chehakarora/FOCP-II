//Program to calculate the average marks of three students
#include<iostream>
#include<iomanip>
int main(){
    int m1,m2,m3;
    float avg;
    std::cout<<"Enter marks of first student=";
    std::cin>>m1;
    std::cout<<"Enter marks of second student=";
    std::cin>>(m2);
    std::cout<<"Enter marks of third student=";
    std::cin>>m3;
    avg=(m1+m2+m3)/3.0;
    std::cout<<"Average marks of the students="<<std::setw(4)<<avg;
    return 0;
}