#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"size of array is "<<n<<endl;
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool linearSearch(int arr[],int n,int k){
    print (arr,n);
    if(n==0){
        return 0;
    }
    if(arr[0]==k){
        return true;
    }else{
        bool remainingpart=linearSearch(arr+1,n-1,k);
        return remainingpart;
    }
    
}
int main()
{
    int arr[5]={2,6,9,4,1};
    int size=5;
    int key=10;
    bool ans=linearSearch(arr,size,key);
    if(ans){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
return 0;
}