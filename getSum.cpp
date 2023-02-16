#include<iostream>
using namespace std;
int getSum(int arr[],int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int remainingpart=getSum(arr+1,n-1);
    int sum=arr[0]+remainingpart;
    return sum;
}
int main()
{
    int arr[5]={2,4,5,9,7};
    int size=5;
    int ans=getSum(arr,size);
    cout<<ans<<endl;

return 0;
}