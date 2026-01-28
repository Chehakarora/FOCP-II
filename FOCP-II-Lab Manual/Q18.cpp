//Program to validate if IDs are palindromes
#include <iostream>
int main() {
	std::string S;
    std::cout<<"Enter the ID: ";
	std::cin>>S;
	int palindrome=1;
	int j=S.length();
	for(int i=0;i<j/2;i++){
		if(S[i]!=S[j-i-1]){
			palindrome=0;
			break;
		}
	}
	if(palindrome)
	std::cout<< "Yes, it's a palindrome!";
	else
	std::cout<< "No, it's not a palindrome!";
	return 0 ;
}