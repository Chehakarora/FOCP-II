//Program to accept salary of 10 employees in an array, compute total salary and average salary, then display the result.
#include<iostream>
int main(){
    int salary[10];
    int total=0;
    float average;
    std::cout<<"Enter salaries for 10 employees: \n";
    for(int i=0;i<10;i++){
        std::cout<<"Employee "<<i+1<<"\n";
        std::cin>>salary[i];
        total+=salary[i];
        average=total/10;
     }
    std::cout<<"The total salary of employees is: Rs. "<<total;
    std::cout<<"\nThe average salary of employees is: Rs. "<<average;
    return 0;


}