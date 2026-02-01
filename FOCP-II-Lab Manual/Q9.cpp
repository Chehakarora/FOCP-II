//Program to classify a character as vowel, consonant or number.
#include<iostream>

int main() {
    char ch;

    std::cout<<"Enter a character: ";
    std::cin>>ch;

    if(ch>='0'&&ch<='9') {
        std::cout<<"The character is a Number";
    }
    else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')) {

        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
           std::cout<<"The character is a Vowel";
        }
        else {
           std::cout<<"The character is a Consonant";
        }
    }
    else {
        std::cout<< "Invalid character";
    }

    return 0;
}
