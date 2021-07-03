#include<iostream>
#include<vector>
using namespace std;

vector<int> frequency(vector<int>nums){
    vector<int>v;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<nums[2*i];j++){
            v.push_back(nums[2*i+1]);
        }
        if((2*i+1)==(n-1))
            break;
    }
        return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>res;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    res = frequency(arr);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
