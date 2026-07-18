#include <bits/stdc++.h> 
using namespace std;

int findpivot(vector <int>&a){
    int s=0;
    int e=a.size()-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    vector <int> arr = {7,8,9,1,2,3};
    int ans = findpivot(arr);
    cout<<"Ans is : "<<ans;
}