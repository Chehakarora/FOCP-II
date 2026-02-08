//Program to check whether a given number is a Perfect number or an Armstrong number.
#include<iostream>
#include<cmath>
int main(){
    int num, temp, sum=0, i=0, j, perfect_sum=0;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    temp=num;
    //to check perfect number
    for(int k = 1; k <= num/2; k++){
    if(num % k == 0)
        perfect_sum += k;
    }
    if(perfect_sum == num)
        std::cout << "It is a perfect number.\n";
    else
        std::cout << "It is not a perfect number.\n";


    if(num==0){
        std::cout<<"It is an armstrong number.";
    return 0;
    }
    //to calculate power
    while(temp!=0){
        temp=temp/10;
        i=i+1;
    }
    temp=num;
    //to calculate armstrong
    while(temp!=0){
        j=temp%10;
        sum=sum+(int)pow(j,i);
        temp=temp/10;
    }
    //tocheck if armstrong
    if(sum==num)
     std::cout<<"It is an armstrong number.";
    else
     std::cout<<"It is not an armstrong number.";
    return 0;
}