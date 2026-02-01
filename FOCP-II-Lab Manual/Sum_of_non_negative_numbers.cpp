//Program to take multiple inputs, calculate their sum, skip negative numbers using continue, and stop input using break
#include <iostream>

int main() {
    int n, num, sum = 0;

    std::cout<<"Enter the number of values: ";
    std::cin>>n;

    std::cout<<"Enter the values (0 to stop):\n";

    for(int i=1;i<=n;i++) {
        std::cin>>num;

        if(num==0) {
            break;          
        }
        if(num<0) {
            continue;       
        }
        sum += num;  
    }

    std::cout<<"Sum of positive numbers = "<<sum;
    return 0;
}
