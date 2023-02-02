// Problem : Order Not Known Binary Search

// Method 1 : Binary Search

// Time Complexity : O(log(n))

#include<bits/stdc++.h>
using namespace std;

int onAscendingOrder(vector<int>& arr, int elem) {
    int low = 0, high = arr.size() - 1, ind = -1;
    while(low <= high) {
        int mid = (low + high)/2;
        if(arr[mid] == elem) {
            ind = mid;
            break;
        }
        else if(arr[mid] < elem) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return ind;
}

int onDescendingOrder(vector<int>& arr, int elem) {
    int low = 0, high = arr.size() - 1, ind = -1;
    while(low <= high) {
        int mid = (low + high)/2;
        if(arr[mid] == elem) {
            ind = mid;
            break;
        }
        else if(arr[mid] > elem) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return ind;
}

int main(){
    vector<int> arr{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int elem = 5;
    if(arr[0] < arr[arr.size()-1]) cout<<onAscendingOrder(arr, elem);
    else cout<<onDescendingOrder(arr, elem);
    return 0;
}