#include<iostream>
#include<vector>
using namespace std;

vector<int> freqsmall(vector<int>& nums) {
        int c=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j])
                    c++;
            }
            v.push_back(c);
        }
        return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>res;
    for(int i=0;i<n;i++)
        cin>>v[i];
    res = freqsmall(v);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
