#include<iostream>
using namespace std;

int main (){
    int arr[7]={5,1,1,3,4,5,4};
    int ans= 0;
    for(int i = 0;i<7 ;i++){
        ans = ans^arr[i];
    }
    cout<<endl<<"Ans is :"<<ans;
    // return ans;
}