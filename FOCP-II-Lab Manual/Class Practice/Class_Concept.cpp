//Class concept
#include<iostream>

class Fruits{
    public:
    std::string name;
    std::string taste;
    std::string colour;
    float quantity;
    float price;

    void input_details(){
        std::cout<<"Enter the fruit name, its taste, colour, quantity, price";
        std::cin>>name>>taste>>colour>>quantity>>price;
    }
    void display_info(){
        std::cout<<"\nFruit Name: "<<name<<"\nIt's taste: "<<taste<<"\nIt's colour: "<<colour<<"\nQuantity: "<<quantity<<"\nPrice: "<<price;
    }
};
int main(){
    Fruits f1;
    f1.name="Strawberry";
    f1.taste="Sweet+Tangy";
    f1.colour="Red";
    f1.quantity=2;
    f1.price=100;
 
    f1.display_info();
    return 0;
}