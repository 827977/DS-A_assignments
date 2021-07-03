#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2){
    vector<int>v;
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0,j=0;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    while(i<n1&&j<n2){
    if(i>0&&arr1[i]==arr1[i-1]){
        i++;
        continue;
    }
    if(arr1[i]<arr2[j])
        i++;
    else if(arr1[i]>arr2[j])
        j++;
    else{
        v.push_back(arr1[i]);
        i++;
        j++;
    }
    }
    return v;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    vector<int>res;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    res = intersection(arr1,arr2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}


