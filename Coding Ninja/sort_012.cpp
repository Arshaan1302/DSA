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

void sort012(vector<int>&arr,int n){
    int s=0;
    int e=0,k=n-1;
     while (e <= k)
    {
        if (arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e++;
        }
        else if (arr[e] == 1)
        {
            e++;
        }
        else
        {
            swap(arr[e], arr[k]);
            k--;
        }
    }
}

int main(){
    vector<int>a;
    getVector(a);
    printVector(a);
    sort012(a,a.size());
    cout<<"Final :"<<endl;
    printVector(a);
}