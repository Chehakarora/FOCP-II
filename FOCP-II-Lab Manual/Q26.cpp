//Program to accept marks in 5 subjects, compute the total and percentage, and display the result.
#include<iostream>
int main(){
    int marks;
    int sum=0;
    float percentage;
    std::cout<<"Enter marks of the student in five subjects: \n";
    for(int i=0;i<5;i++){
        std::cout<<"Subject "<<i+1<<":"<<"\n";
        std::cin>>marks;
        sum+=marks;
        percentage=(sum*100)/500; 
    }
    std::cout<<"Total marks scored by the student is "<<sum;
    std::cout<<"\nTotal percentage of the student is "<<percentage<<"%";
    return 0;
}