//Program to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
#include<iostream>
#include<iomanip>

int main() {
    int emp_no;
    float basic_salary, bonus, net_salary;

    std::cout<<"Enter employee number: ";
    std::cin>>emp_no;
    std::cout<<"Enter basic salary: ";
    std::cin>>basic_salary;

    bonus=0.12f*basic_salary;
    net_salary=basic_salary+bonus;

    std::cout<<"\n"<<std::left<<std::setw(20)<<"Employee No"<<std::setw(20)<<"Basic Salary"<<std::setw(15)<<"Bonus"<<std::setw(15)<<"Net Salary"<<"\n";
    std::cout<<std::left<<std::setw(20)<<emp_no<<std::setw(20)<<basic_salary<<std::setw(15)<<bonus<<std::setw(15)<<net_salary<<"\n";

    return 0;
}

/*
#include <iostream>

int main() {
    int n, i;
    float basic_salary, bonus, net_salary;

    std::cout<<"Enter number of employees: ";
    std::cin>>n;

    for(i=1;i<=n;i++) {
        std::cout<<"\nEmployee"<<i<<"\n";

        std::cout<<"Enter basic salary: ";
        std::cin>>basic_salary;

        bonus=0.12f*basic_salary;
        net_salary=basic_salary+bonus;

        std::cout<<"Bonus (12%):"<<bonus<<"\n";
        std::cout<<"Net Salary:"<<net_salary<<"\n";
    }
    return 0;
}
*/
