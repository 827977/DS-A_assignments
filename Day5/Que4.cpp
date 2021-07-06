#include<bits/stdc++.h>
using namespace std;

class NumArray{
public:
    vector<int>v;
    NumArray(vector<int>arr){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            v.push_back(sum);
        }
    }
    void sumRange(int left, int right){
        if(left==0)
            cout<<v[right];
        else{
            cout<<v[right]-v[left-1];
        }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NumArray obj1(arr);
    obj1.sumRange(0,2);
    obj1.sumRange(2,5);
    obj1.sumRange(0,5);
}
