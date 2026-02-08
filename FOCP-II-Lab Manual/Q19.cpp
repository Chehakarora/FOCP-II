//Program to find all prime numbers within a given range.
#include<iostream>
int main(){
    int num1,num2;
    std::cout<<"Enter range of nos.: ";
    std::cin>>num1;
    std::cin>>num2;
    
    std::cout<<"The prime numbers between "<<num1<<" and "<<num2<<" are: ";
    for(int i=num1;i<=num2;i++){
        if(i<=1)
        continue;
        int count=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if (count == 0) {
         std::cout << i << " ";
        }
    }

    return 0;
}