// vector<int> u(vector<int>& a,vecto<int>& b)
// {
//     int n=a.size(),m=b.size();
//     int i=0,j=0;
//     vector<int> ans;
//     while(i<n&&j<m)
//     {
//         if(a[i]==b[j])
//         j++;
//         else{
//         if(a[i]<b[j]){
//         ans.emplace_back(a[i]);
//         i++;}
//         else{
//         ans.emplace_back(b[j]);
//         j++;}
//         }

//     }
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> u(vector<int>a,vector<int>b){
    int n = a.size();
    int m = b.size();
    vector<int>v;
    int i=0;
    int j=0;
    while(i<n &&j<m){
        if(a[i]==b[j]){
            j++;
        }
        else if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            v.push_back(b[i]);
            j++;
        }
        

    }
    for(i<n;i++;){
        v.push_back(a[i]);
    }
    for(j<n;j++;){
        v.push_back(b[j]);
    }
    
    
    return v;
}
int main(){
    vector<int>a={1,2,3,4,6};
    vector<int>b={2,3,5};
    vector<int>t=u(a,b);
    int k = t.size();
    cout<<"hii";
    return 0;
}