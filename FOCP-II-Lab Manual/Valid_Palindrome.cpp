//Valid Palindrome
#include<iostream>
int main(){
    std::string s;
    std::getline(std::cin,s);
    std::string S2="";
    unsigned int i;
    for(i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z')
           S2=S2+char(s[i]+32);
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
           S2=S2+s[i];
       }
    std::cout<<S2;
    int j=S2.length(),ispalindrome;
    for(int i=0;i<j/2;i++){
		if(s[i]!=s[j-i-1]){
			ispalindrome=0;
			break;
		}}
		if(ispalindrome)
		std::cout<<"\n"<<"YES";
		else
		std::cout<<"\n"<<"NO";
		return 0;
}