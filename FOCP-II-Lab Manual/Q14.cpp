//Program to develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
#include<iostream>
int main(){
    std::cout<<"Welcome! Enter nunmbers and choose your task.";
    std::cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit";
    float num1,num2;
    std::cout<<"\nEnter number 1: ";
    std::cin>>num1;
    std::cout<<"Enter number 2: ";
    std::cin>>num2;
    int choice;
    std::cout<<"\nEnter your choice: ";
    std::cin>>choice;
    float ans;
    if(choice==1){
            ans=num1+num2;
            std::cout<<"Sum of the two nos. is: "<<ans;}
    else if(choice==2){
            ans=num1-num2;
            std::cout<<"Difference of the two nos: is: "<<ans;}
    else if(choice==3){
            ans=num1*num2;
            std::cout<<"Product of the two nos. is: "<<ans;}
    else if(choice==4){
        if(num2==0)
            std::cout<<"Division by zero not allowed!";
        else{
            ans=num1/num2;
            std::cout<<"Quotient of the two numbers is: "<<ans;
        }
    }
    else if(choice==5){
        std::cout<<"Exiting program";
    }
    else{
        std::cout<<"Invalid choice!";
    }
    return 0;
}