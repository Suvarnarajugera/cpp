// quick sort is works based on the divide and conquire algorithm
// the key process of quick sort is partioning and selecting pivot.
// here i choosed the last element as pivot.
//you can selece any of the element as pivot.
// whether it is last or first or random element. just small changes occurs while implementation.
// Time Complexity :
    // BestCase :-  Ω(Nlog(N)).
    // Average Case :- θ(Nlog(N)).
    //worst case :- O(N^2).
// Space Complexity:- O(1).

#include<bits/stdc++.h>
using namespace std;
int partition(int low, int high, int arr[]){
    // last element as  pivot
    int piv = arr[high - 1];
    //pointer for lowest the next is high
    int j = low - 1;
    for(int i = low; i < high - 1; i++){
        if(arr[i] <= piv){
            j += 1;
            swap(arr[i], arr[j]);
        }
    }
    //swapping the pivot and the j + 1 
    swap(arr[j + 1], arr[high - 1]);
    return j + 1;
}
void quicksort(int low, int high, int arr[]){
    if(low >= high) return;
    // partitionig around the pivot 
    int pivot = partition(low, high, arr);
    //left part of the pivot
    quicksort(low, pivot, arr);
    //right part of the pivot
    quicksort(pivot + 1, high, arr);   
}
int main(){ 
    int arr[6] = {1, 2, 7, 5, 3, 2};
    int  n = sizeof(arr)/sizeof(int);
    quicksort(0, n, arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}