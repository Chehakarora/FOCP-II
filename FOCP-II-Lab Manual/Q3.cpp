//Program to convert Fahrenheit temperature into Centigrade
#include<iostream>
#include<iomanip>
int main(){
    int choice;
    float temp;
    float converted_temp;
    std::cout<<"Press 1 for Farenheit to Celsius"<<"\n";
    std::cout<<"Press 2 for Celsius to Farenheit"<<"\n";
    std::cout<<"Enter your choice: "<<"\n";
    std::cin>>choice;
    if(choice==1){
        std::cout<<"Enter temperature in Farenheit: "<<"\n";
        std::cin>>temp;
        converted_temp=((5/9.0)*(temp-32));
        std::cout<<"The given temp when converted to Celsius is: "<<converted_temp<<"\n";
    }
    else if(choice==2){
        std::cout<<"Enter temperature in Celsius: "<<"\n";
        std::cin>>temp;
        converted_temp=((9/5.0*temp)+32);
        std::cout<<"The given temp when converted to Farenheit is: "<<converted_temp<<"\n";
    }
    else
    std::cout<<"Invalid choice!";
    return 0 ;

}