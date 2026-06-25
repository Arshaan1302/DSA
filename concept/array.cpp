#include <iostream>
#include <array>
using namespace std;

// Input In Array
void inputArray(int arr[],int size){
     cout<<"Input Array : "<<endl;
    for (int i=0 ; i < size ; i++){
        cin >> arr[i];
    }
}

// Print Array
void outputArray(int arr[],int size){
    cout<<"Printing Array : "<<endl;
    for (int i=0 ; i < size ; i++){
        cout<< arr[i] <<" " ;
    }
    cout<<endl;
}
// Linear Search 
bool LinearSearch(int arr[],int size,int target){
    cout<<"Searching in  Array : "<< target <<endl;
    for (int i=0;i<size;i++){
        if(arr[i]==target){
            return 1;
        }
        else{
           continue;
        }
    }
    return 0;
}
// Sort
void sortArray(int arr[], int size){
    int temp;

    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){   
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Arrays
    int arr[10] ;
    inputArray(arr,10);
    outputArray(arr,10);
    int n;
    cout<<"Enter Target :"<<endl;
    cin>>n;
    if(LinearSearch(arr,10,n)){
         cout<<"Target "<<n<<" is present "<<endl;
    }
    else{
         cout<<"Error !! Target "<<n<<" is not present "<<endl;
    }
    sortArray(arr,10);
}