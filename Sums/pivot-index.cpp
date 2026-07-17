#include <bits/stdc++.h> 
using namespace std;
void getVector(vector <int>&a){
    cout<<"Enter the size :"<<endl;
    int n,ab;
    cin>>n;
    cout<<"Enter the vector :"<<endl;
    for(int i=0;i<n;i++){
        cin>>ab;
        a.push_back(ab);
    }
}
void printVector(vector <int>&a){
    cout<<"Printing Vector : "<<endl;
    for (size_t i=0 ; i < a.size() ; i++){ 
          cout<< a[i] <<" " ;
    }
    cout<<endl;
}
int findPivot(vector<int>& arr) {
    int totalSum = 0;
    for (int x : arr)
        totalSum += x;

    int leftSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
            return i;

        leftSum += arr[i];
    }

    return -1;
}

int main(){
    vector <int> a;
    getVector(a);
    int ans= findPivot(a);
    cout<<"Ans is :"<<ans;
}