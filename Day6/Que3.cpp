#include<bits/stdc++.h>
using namespace std;

bool diagonal(vector<vector<int>>matrix){
    for(int i=0;i<matrix.size()-1;i++)
            for(int j=0;j<matrix[0].size()-1;j++)
                if(matrix[i][j]!=matrix[i+1][j+1])
                    return false;
        return true;
}

int main(){
    vector<vector<int>> mat
    {
        {1,2,3,4},
        {8,1,2,3},
        {7,8,1,2}
    };
     bool f =diagonal(mat);
     if(f==1)
        cout<<"True";
     else
        cout<<"False";
}

