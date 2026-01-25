//Program to display a butterfly pattern using stars
#include <iostream>

int main() {
    int n;
    
    std::cout<<"Enter the height of the pattern: ";
    std::cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            std::cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++) {
            std::cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

    for(int i=n-1;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            std::cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++) {
            std::cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            std::cout<<"*";
        }
            std::cout<<"\n";
    }
    
    return 0;
}
