#include <iostream>
#include <vector>
using namespace std;

void getArray(vector<int>&arr ){
    cout<<"Getting Array:"<<endl;
    int k;
for(int i =0 ;i<5;i++){
    cin>>k;
    arr.push_back(k);
}
}
void showArray(vector<int>&arr ){
     cout<<"Printing Array:"<<endl;
    for(int i =0 ;i<5;i++){
   cout<<arr[i]<<" ";
}
}
bool binarySearch(vector<int>&arr,int target){
    int s=0,e=arr.size()-1;
    int m = s + (e-s)/2;
    cout<<"m is : "<<m<<" arr[m] : "<<arr[m]<<endl;
    while(s<e){
        cout<<"s is : "<<s<<" e is : "<<e<<" m is : "<<m<<" arr[m] : "<<arr[m]<<endl;
        if(arr[m]==target){
            return 1;
        }
        else if(arr[m]<target){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m = s + (e-s)/2;
    }
    return 0;
}

int main(){
    vector <int> arr;
    int target;
    cout<<"Enter Array of size 5:"<<endl;
    getArray(arr);
    cout<<"Enter Key to be searched :"<<endl;
    cin>>target;
    int result=binarySearch(arr,target);
    if(result){
        cout<<"Key is present"<<endl;
    }
    else{
         cout<<"Key is absent"<<endl;
    }
    //showArray(arr);

}