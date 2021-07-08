#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>mat){
    int n= mat.size();
    int m= mat[0].size();
    vector<vector<int>> vec(m, vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vec[j][i] = mat[i][j];
        }
    }
    return vec;
}

int main(){
    vector<vector<int>> mat
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    mat = transpose(mat);
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
