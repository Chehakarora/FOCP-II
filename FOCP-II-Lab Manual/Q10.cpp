//Program to check if a year is a leap year or not.
#include<iostream>
int main(){
int year;
std::cout<<"Enter year: ";
std::cin>>year;
if (year%400==0 || (year%4==0&&year%100!=0))
std::cout<<"It's a leap year!";
else
std::cout<<"It's not a leap year!";
}