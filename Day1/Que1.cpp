#include<iostream>
using namespace std;

int main(){
    int n,cnt;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int prev=0,next=0;
    while(next!=n){
    if(arr[prev]==arr[next]){
        cnt++;
        next++;
    }
    else{
        prev++;
        arr[prev]=arr[next];
        next++;
    }
    }
    for(int i=0;i<=prev;i++)
        cout<<arr[i]<<" ";
}
