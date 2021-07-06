#include<bits/stdc++.h>
using namespace std;

int roadParameter(vector<vector<int>>v){
    int n=v.size();
    int m=v[0].size();
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==1){
                res+=4;
                if(i>0 && v[i-1][j]==1)
                    res-=2;
                if(j>0 && v[i][j-1]==1)
                    res-=2;
            }
        }
    }
    return res;
}

int main(){
    vector<vector<int>>v
    {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}
    };
    int k;
    k= roadParameter(v);
    cout<<k;
}
