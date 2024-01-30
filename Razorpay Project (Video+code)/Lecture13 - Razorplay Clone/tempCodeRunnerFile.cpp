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