//Program to calculate the total bill amount after applying a 20% discount on the purchase
#include <iostream>
#include <iomanip>

int main() {
    int item_no;
    float quantity, unit_price;
    float amount, discount, final_amount;

    std::cout<<"Enter item number: ";
    std::cin>>item_no;
    std::cout<<"Enter quantity: ";
    std::cin>>quantity;
    std::cout<<"Enter unit price: ";
    std::cin>>unit_price;

    amount=quantity*unit_price;
    discount=0.20f*amount;
    final_amount=amount-discount;

    std::cout<<"\n"<<std::left<<std::setw(10)<<"Item No"<<std::setw(12)<<"Quantity"<<std::setw(14)<<"Unit Price"<<std::setw(15)<<"Final Amount"<<"\n";

    std::cout<<std::left<<std::setw(10)<<item_no<<std::setw(12)<<quantity<<std::setw(14)<<unit_price<<std::setw(15)<<final_amount<<"\n";

    return 0;
}
/*
#include<iostream>
#include<iomanip>
int main(){
    int n, i, item_no;
    float quantity, unit_price, total_amount=0, discount, final_bill;

    std::cout<<"Enter number of items: ";
    std::cin>>n;

    for (i=1;i<=n;i++) {
        std::cout<<"Item "<<i<<" no.: ";
        std::cin>>item_no;        
        std::cout<<"Item "<<i<<" quantity: ";
        std::cin>>quantity;       
        std::cout<<"Item "<<i<<" unit price: ";
        std::cin>>unit_price;
        std::cout<<"\n";

        total_amount+=quantity*unit_price;
    }

    discount=0.20f*total_amount;
    final_bill=total_amount-discount;

    std::cout<<"\nTotal Amount: "<<total_amount;
    std::cout<<"\nDiscount (20%): "<<discount;
    std::cout<<"\nFinal Bill Amount: "<<final_bill;

    return 0;
}
*/