//Program to store the prices of n items in an array and display the maximum price.
#include<iostream>
int main(){
    int n;
    std::cout<<"Enter no. of values in array: ";
    std::cin>>n;
    int price[n];
    std::cout<<"Enter the prices: \n";
    for(int i=0;i<n;i++){
        std::cin>>price[i];
    }
    int max=price[0];
    for(int i=0;i<n;i++){
        if(max<price[i])
        max=price[i];
    }
    std::cout<<"Maximum price in the item price list is: "<<max;
    return 0;
}