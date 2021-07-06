#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> shift(vector<vector<int>>grid , int k){
     vector<int>v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        while(k--){
            for(int j=1;j<v.size();j++){
                swap(v[0],v[j]);
            }
        }
        int m=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j]= v[m];
                m++;
            }

        }
        return grid;
}

int main(){
    vector<vector<int>>v
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int k;
    cin>>k;
    v = shift(v,k);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
