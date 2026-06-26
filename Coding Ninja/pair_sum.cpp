#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Print Vector //size_t is a data type which is used instead of int here .. means positive int .. u can also use int
void printVector(vector <int>&a){
    cout<<"Printing Vector : "<<endl;
    for (size_t i=0 ; i < a.size() ; i++){ 
          cout<< a[i] <<" " ;
    }
    cout<<endl;
}
//Get Vector 
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
vector<vector<int>> pairSum(vector<int> &arr, int s) {

    vector<vector<int>> ans;

    for(size_t i = 0; i < arr.size(); i++) {

        for(size_t j = i + 1; j < arr.size(); j++) {

            if(arr[i] + arr[j] == s) {

                vector<int> temp;

                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));

                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());

    return ans;
}


int main(){
    vector <int>a;
getVector(a);
//printVector(a);
cout<<"Enter Target :"<<endl;
int target;
cin>>target;
vector<vector<int>>ans;
ans=pairSum(a,target);
cout << "Pairs are:\n";

for(size_t i = 0; i < ans.size(); i++) {
    cout << ans[i][0] << " " << ans[i][1] << endl;
}
}