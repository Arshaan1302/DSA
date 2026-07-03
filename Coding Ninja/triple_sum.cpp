#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getArray(vector<int> &arr, int size) {
    cout << "Getting Array:" << endl;
    int k;
    for (int i = 0; i < size; i++) {
        cin >> k;
        arr.push_back(k);
    }
}
void showArray(vector<int>&arr ){
     cout<<"Printing Array:"<<endl;
    for(size_t i =0 ;i<arr.size();i++){
   cout<<arr[i]<<" ";
}
cout<<endl;
}

void showArray2(vector<vector<int>> &res) {
    cout << "Printing Result:" << endl;

    for (size_t i = 0; i < res.size(); i++) {
        for (size_t j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

// Checks if a sorted triplet is already present
bool isPresent(vector<vector<int>> &result, vector<int> &triplet) {
    for (size_t i = 0; i < result.size(); i++) {
        if (result[i] == triplet) {
            return true;
        }
    }
    return false;
}
// ! If the triplet should be adjacent then use this method 
// vector<vector<int>> tripleSum(vector<int> &arr, int n,int K) {
//     vector<vector<int>> result;

//     for (int i = 0; i <= arr.size() - 3; i++) {

//         if (arr[i] + arr[i + 1] + arr[i + 2] == K) {
//             showArray(result);
//             vector<int> temp;
//             temp.push_back(arr[i]);
//             temp.push_back(arr[i + 1]);
//             temp.push_back(arr[i + 2]);

//             // Sort so different orders become identical
//             sort(temp.begin(), temp.end());

//             if (!isPresent(result, temp)) {
//                 result.push_back(temp);
//             }
//         }
//     }

//     if (result.empty()) {
        
//         result.push_back({-1});
        
//     }

//     return result;
// }

// ! IF any how you want to find three elements who sums up to target use this method 
vector<vector<int>> tripleSum(vector<int> &arr, int n,int K) {
   
     vector<vector<int>> result;
     sort(arr.begin(),arr.end());

    for (size_t i= 0;i<arr.size()-2;i++){
        if (i > 0 && arr[i] == arr[i - 1])
        continue;
        int s=i+1;
        int e=n-1;
        while(s<e){
        if (arr[i]+arr[s]+arr[e]==K){
            
            result.push_back({arr[i], arr[s], arr[e]});

    while (s < e && arr[s] == arr[s + 1]) s++;
    while (s < e && arr[e] == arr[e - 1]) e--;

    s++;
    e--;
        }
        else if (arr[i]+arr[s]+arr[e]<K){
           
            s++;
        }
        else{
            
            e--;
        }
    }
    }
    return result;
}



int main() {
    vector<int> arr;
    vector<vector<int>> res;
    int target;
    int size;

    cout << "Enter the size of array :" << endl;
    cin >> size;

    cout << "Enter Array of size " << size << ":" << endl;
    getArray(arr, size);

    cout << "Enter sum to be searched :" << endl;
    cin >> target;

    res = tripleSum(arr, size,target);

    showArray2(res);

    return 0;
}