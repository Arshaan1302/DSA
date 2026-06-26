#include<iostream>
#include <vector>
using namespace std;


//My approach --Brute Force 

// bool isPresent(vector <int>& a,int target){ // send copy of the vector using '&'
//     cout<<"Size is :"<<a.size()<<endl;
// for(size_t i=0;i<a.size();i++){
//     if(a[i]==target){
//         return 1;
//     }
// }
// return 0;
// }

// int main (){
//     int a[4]={1,2,3,3};
//     vector <int>b;
//     for(int i=0;i<4;i++){
//         if(isPresent(b,a[i])){
//          cout<<"Duplicate number is : "<<a[i];   
//         }
//         else{
//             b.push_back(a[i]);
//         }
//     }


// }
// XOR Approach 
int main (){
    int a[4]={1,2,3,3};
    int duplicate = 0;
    for(int i =1 ; i<=3;i++){
        duplicate=duplicate^i;
    }
    cout<<"Duplicate is : "<<duplicate<<endl;
    for (int i=0;i<4;i++){
        duplicate=duplicate^a[i];
    }
     cout<<"Duplicate is : "<<duplicate<<endl;
}
