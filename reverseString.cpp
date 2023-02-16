#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int i,int j){
    cout<<"function calls "<<str<<endl;
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
    
}
int main()
{
    string str="ramkrishna";
    int s=0,end=str.size()-1;
    reverse(str,s,end);
    cout<<str<<endl;

return 0;
}