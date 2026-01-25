//Program to display reverse seating layouts for events. 
#include <iostream>

int main() {
    int n;

    std::cout<<"Enter the starting number: ";
    std::cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=n;j>=i;j--) {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}
