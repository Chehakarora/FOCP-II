//Program to find if a given number is prime or not
#include<iostream>
int main(){
    int num, flag=1;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    
    for(int i=2;i<=num;i++){
        if(num%i==0)
        flag=0;
        break;
    }
    if(flag==1){
        std::cout<<"It's a prime no.";
    }
    else 
        std::cout<<"It's not a prime no.";

    return 0;
}
