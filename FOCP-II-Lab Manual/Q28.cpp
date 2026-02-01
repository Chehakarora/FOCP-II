//Program to store 5 elements in an array, compute sum of all even and sum of all odd numbers.
#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the no of elements in the array: ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int sum_even=0,sum_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        sum_even+=arr[i];
        else
        sum_odd+=arr[i];
    }
    std::cout<<"Sum of even elements in the array is: "<<sum_even;
    std::cout<<"\nSum of odd elements in the array is: "<<sum_odd;
    return 0;
}