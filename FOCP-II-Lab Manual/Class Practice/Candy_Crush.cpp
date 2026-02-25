//Program to simulate a basic Candy Crush game element using class and object creation.
#include<iostream>

class Candy{
    std::string color;
    int points;  
    public:
    void setCandy(std::string c, int p){
        color=c; points=p;
    }
    void displayCandy(){
        std::cout<<"\n Color: "<<color;
        std::cout<<"\n Points: "<<points;
    }
};
int main(){
    Candy c1,c2;
    std::string clr1; int pts1; std::string clr2; int pts2;
    std::cout<<"\n Enter color and points for Candy 1: ";
    std::cin>>clr1>>pts1;
     std::cout<<"\n Enter color and points for Candy 2: ";
    std::cin>>clr2>>pts2;
    c1.setCandy(clr1, pts1);
    c2.setCandy(clr2, pts2);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}