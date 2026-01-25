//Program to swap the values of two variables
#include<iostream>

int main(){
    int a, b, choice;

    std::cout<<"Enter first number: ";
    std::cin>>a;
    std::cout<<"Enter second number: ";
    std::cin>>b;

    std::cout<<"Choose swapping method: \n";
    std::cout<<"1. Using temporary variable\n";
    std::cout<<"2. Using addition and subtraction operators\n";
    std::cout<<"3. using multiplicatiion and division operators\n";
    std::cout<<"4. Using bitwise XOR\n";
    std::cout<<"5. Using ternary operator\n";
    std::cout<<"Enter your choice: ";
    std::cin>>choice;

    switch(choice){
        
        case 1: {
            int temp;
            temp=a;
            a=b;
            b=temp;
            break;
        }
        case 2:{
            a=a+b;
            b=a-b;
            a=a-b;
            break;
        }
        case 3:{
            if(a!=0 && b!=0){
                a=a*b;
                b=a/b;
                a=a/b;
            } else{
                std::cout<<"Cannot use this method when a value is zero.\n";
                return 0;
            }
            break;
        } 
        case 4:{
            a=a^b;
            b=a^b;
            a=a^b;
            break;
        }   
        case 5:{
            int temp;
            (true)?(temp=a,a=b,b=temp):0;
            break;
        }

        default:{
        std::cout<<"Inavlid choice.\n";
        return 0;
        }        
    }
    std::cout<<"After swapping:\n";
    std::cout<<"a= "<<a<<"\n";
    std::cout<<"b= "<<b<<"\n";

    return 0;
}