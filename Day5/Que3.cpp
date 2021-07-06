#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> reshape(vector<vector<int>>mat, int r, int c){
        int n=mat.size();
        int m=mat[0].size();
        int sz = n * m;
        if(sz!=c*r)
            return mat;
        vector<vector<int>> v(r, vector<int>(c));
            vector<int>vec;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    vec.push_back(mat[i][j]);
                }
            }
            int k=0;
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    v[i][j]=vec[k++];
        return v;
}


int main(){
    int r,c;
    vector<vector<int>>v
    {
        {1,2},
        {3,4}
    };
    cin>>r>>c;
    v = reshape(v,r,c);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
