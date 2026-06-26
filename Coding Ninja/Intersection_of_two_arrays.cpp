#include<iostream>
#include<vector>
using namespace std;

// Print Vector //size_t is a data type which is used instead of int here .. means positive int .. u can also use int
void printVector(vector <int>&arr){
    cout<<"Printing Vector : "<<endl;
    for (size_t i=0 ; i < arr.size() ; i++){ 
          cout<< arr[i] <<" " ;
    }
    cout<<endl;
}

int main(){
    vector <int> a={1,5,7,9};
     vector <int> b={5,6,7,8,9};
vector <int> ans;
size_t i=0,j=0;
while(i<a.size()){
    
    if(a[i]<b[j]){
        i++;
       
    }
    else if(a[i]==b[j]){
        // ans.push_back(a[i]);
        // a.erase(a.begin()+i);
        // b.erase(b.begin());
        ans.push_back(arr1[i]);
			i++;
			j++;
    }
    else{
        j++;
    }
}
cout<<endl<<"Final Ans :"<<endl;
printVector(ans);
    
}