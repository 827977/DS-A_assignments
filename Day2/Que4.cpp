#include<iostream>
#include<vector>
using namespace std;

int GoodPair(vector<int>nums){
    int c=0;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j])
                c++;
        }
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k = GoodPair(nums);
    cout<<k;
}
