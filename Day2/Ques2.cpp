#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    int n,extratoffee,mx;
    cin>>n;
    cin>>extratoffee;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mx=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>mx)
            mx=v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]+extratoffee>=mx){
            cout<<"true";
        }
        else
            cout<<"false";
    }

}
