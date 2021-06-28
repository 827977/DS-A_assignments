#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n/2;i++){
        v.push_back(arr[i]);
        v.push_back(arr[i+n/2]);
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
