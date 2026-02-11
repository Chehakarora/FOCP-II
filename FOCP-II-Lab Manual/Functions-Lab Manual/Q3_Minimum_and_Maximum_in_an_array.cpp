//Program to find maximum and minimum in an array
#include <iostream>

void findMinMax(int arr[], int size, int &minVal, int &maxVal){
    minVal=arr[0];
    maxVal=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]<minVal){
            minVal=arr[i];
        }
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
}

int main() {
    int N;
    std::cin>>N;

    int arr[N];
    for(int i=0;i<N;i++){
        std::cin>>arr[i];
    }

    int minVal, maxVal;

    findMinMax(arr, N, minVal, maxVal);

    std::cout<<minVal<<" "<<maxVal;

    return 0;
}
