#include<iostream>
#include<vector>
using namespace std;

string suffle(string s, vector<int>arr){
    string str=s;
        for(int i=0;i<arr.size();i++){
            str[arr[i]] = s[i];
        }
        return str;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string str,str1;
    cin>>str;
    str1= suffle(str,v);
    for(int i =0;i<str1.length();i++){
        cout<<str1[i];
    }
}
