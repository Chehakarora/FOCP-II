//Sum of elements in an array
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    cout<<sum;
    return 0;
}