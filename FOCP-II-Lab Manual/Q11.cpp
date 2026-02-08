//program to compute total expenses and apply a discount accordingly.
#include<iostream>
int main(){
    int items,price, quantity;
    float discount, total, amount=0 ;
    std::cout<<"Enter no. of items: ";
    std::cin>>items;
    for(int i=1;i<=items;i++) {
    std::cout<<"Enter price of item "<<i<<": ";
    std::cin>>price;
    std::cout<<"Enter quantity of item "<<i<<": ";
    std::cin >>quantity;
    amount+=price*quantity;
    }
    discount=0.10*amount;
    std::cout<<"Total amount is "<<amount;
    if(amount>1000){
        total=amount-discount;
        std::cout<<"\nTotal expenses with discount= "<<total;
    }
    else
    std::cout<<"\nTotal expenses = "<<amount;
    return 0;

}