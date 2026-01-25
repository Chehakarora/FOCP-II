// Program to display a hollow diamond pattern using '*'
#include <iostream>

int main() {
    int n;   

    std::cout<<"Enter the height of half diamond: ";
    std::cin>>n;
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            std::cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++) {
            if(j==1||j==2*i-1)
                std::cout<<"*";
            else
                std::cout<<" ";
        }
        std::cout<<"\n";
    }

    for(int i=n-1;i>=1;i--) {
        for(int j=1;j<=n-i;j++) {
            std::cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++) {
            if(j==1||j==2*i-1)
                std::cout<<"*";
            else
                std::cout<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
