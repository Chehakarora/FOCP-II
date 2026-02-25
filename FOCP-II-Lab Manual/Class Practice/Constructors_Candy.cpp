//Constructors
#include<iostream>

class Candy{
    std::string color;
    int points;  
    public:
    void setCandy(std::string c, int p);
    void displayCandy();
    Candy();
    Candy(std::string cl, int pt);

};

void Candy::setCandy(std::string c, int p){
        color=c; points=p;
    }
void Candy::displayCandy(){
        std::cout<<"\n Color: "<<color;
        std::cout<<"\n Points: "<<points;
    }
Candy::Candy(){ //default constructor
    color="Black"; points=0;
}
Candy::Candy(std::string cl,int pt){ // parametarized constructor
    color= cl; points=pt;
}
int main(){
    Candy c1,c2("red", 35);   //object or instance of the class Candy
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}