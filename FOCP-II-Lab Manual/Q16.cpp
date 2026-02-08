//Program to accept a number and check whether it is prime.
#include<iostream>
int main(){
int num,i;
std::cout<<"Enter a number: ";
std::cin>>num;
for(i=2;i<=num/2;i++){
    if(num%i==0)
    break;
}
if(i<=num/2)
std::cout<<"Number is not prime.";
else
std::cout<<"Number is prime.";
return 0;
}
