#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printingArray(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

void sorting(int n){
    //sorting code
    return;
}

int minElement(vector<int> arr, int n){
    sort(arr.begin(),arr.end());
    return (arr.size()>=1)?arr[0]:INT16_MIN;
}

int main(){
    std::cout<<"Printing";
    std::cout<<"Displaying";
    return 0;
}