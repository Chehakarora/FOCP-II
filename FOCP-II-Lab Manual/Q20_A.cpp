//Program to display a fixed tabular number layout.
#include <iostream>

int main() {
    int rows, columns;

    std::cout<<"Enter number of rows: ";
    std::cin>>rows;
    std::cout<<"Enter number of columns: ";
    std::cin>>columns;

    for(int i=1;i<=rows;i++) {
        for(int j=1;j<=columns;j++) {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}
