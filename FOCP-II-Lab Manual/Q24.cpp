// Program to display alphabets in pyramid form
#include <iostream>

int main() {
    int n;

    std::cout<<"Enter number of rows: ";
    std::cin>>n;

    for(int i=1;i<=n;i++) {
        char ch='A';

        for(int j=1;j<=i;j++) {
            std::cout<<ch;
            ch++;
        }
        std::cout<<"\n";
    }

    return 0;
}
