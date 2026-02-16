#include<iostream>
void computePerformance(int m[], int n)
{
 int max=m[0],min=m[0], avg=m[0];
 for(int i=1;i<n;i++){
    if(max<m[i])
    max=m[i];
    if(min>m[i])
    min=m[i];
    avg+=m[i];
 }
 std::cout<<"\n Min "<<min<<"\n Max "<<max<<"\n Avg "<<float(avg)/n;
}
int main(){
    int marks[]={34,57,44,34,87,59,90,99,88,96};
    computePerformance(marks,10);
    return 0;
}

