#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
bool binarySearch(int arr[],int start,int end,int k){

    cout<<endl;
    print(arr,start,end);
    // base case
    if(start>end){
        return false;
    }
    int mid=(start+end)/2;
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,end,k);
    }else{
        return binarySearch(arr,start,mid-1,k);
    }
}
int main()
{
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=16;

    bool ans=binarySearch(arr,0,size-1,key);
    if(ans){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }

return 0;
}