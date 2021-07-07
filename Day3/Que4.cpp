#include<bits/stdc++.h>
using namespace std;

vector<int> ArrGivenOrder(vector<int>nums, vector<int>index){
    vector<int>target;
    for(int i=0;i<nums.size();i++)
        target.insert(target.begin()+index[i],nums[i]);
    return target;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    vector<int>index(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    for(int i=0;i<n;i++)
        cin>>index[i];
    nums = ArrGivenOrder(nums,index);
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" ";
}
