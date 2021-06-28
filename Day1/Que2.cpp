#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]==key){
            swap(arr[i],arr[j]);
            j--;
        }
        else
            i++;
    }
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
}
