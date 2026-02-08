//Program to accept n sales figures and display the maximum value among them.
#include<iostream>
int main(){
    int n, num1, num, max_salary;
    std::cout<<"Enter number of salary entries: ";
    std::cin>>n;
    std::cout<<"Enter first salary entry: ";
    std::cin>>num1;
    max_salary=num1;
    for(int i=2;i<=n;i++){
        std::cout<<"Enter salary enter no. "<<i<<": ";
        std::cin>>num;
        if(num>max_salary)
        max_salary=num;
    }
    std::cout<<"The largest of all salary entries is "<<max_salary<<".";
    return 0;
}