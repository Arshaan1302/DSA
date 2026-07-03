#include <bits/stdc++.h> 
using namespace std;

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
void sortZeroesAndOne(vector<int>&arr, int size)
{
    int s=0;
    int e=size-1;
    while(s<e){
        if(arr[s]==1 && arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]==0){
            s++;
        }
        else{
            e--;
        }
    }
}

int main(){ 
    vector<int> a;
    getVector(a);
    printVector(a);
    sortZeroesAndOne(a,a.size());
    printVector(a);
}