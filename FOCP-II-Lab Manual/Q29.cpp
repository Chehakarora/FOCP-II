//Program to store daily temperatures in an array and display the minimum temperature for the month.
#include<iostream>
int main(){
    float temp[30];
    std::cout<<"Enter the temperature record for the month! \n";
    for(int i=0;i<30;i++){
        std::cout<<"Day "<<i+1<<":"<<"\n";
        std::cin>>temp[i];
    }
    int min=temp[0];
    for(int i=0;i<30;i++){
        if(min>temp[i])
        min=temp[i];
    }
    std::cout<<"Minimum temperature recorded in the month was "<<min<<" degree Celsius.";
    return 0;
}