#include<iostream>
using namespace std;

int main(){
    int r,res,c,mx=0,sum=0;
    cin>>r>>c;
    int account[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>account[i][j];
        }
    }
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum= sum+account[i][j];
        }
        if(mx<sum){
            mx=sum;
            res=i+1;
        }
    }
    cout<<"Customer"<<res;
}
