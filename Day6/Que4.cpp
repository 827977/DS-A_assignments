#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> flipreverse(vector<vector<int>>& mat) {
        int n=mat[0].size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<n/2;j++){
                swap(mat[i][j],mat[i][n-1-j]);
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1)
                    mat[i][j]=0;
                else
                    mat[i][j]=1;
            }
        }
        return mat;
    }

int main(){
    vector<vector<int>> mat
    {
        {1,1,0},
        {1,0,1},
        {0,0,0}
    };
    mat = flipreverse(mat);
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

