#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
//custom comperator for sorting  a vector
bool com(int x ,int y){
    if (x > y){
        return true;
    }
    else return false;
}

// custom comparetors for sorting in pairs
bool coom(pair<int,int>&x , pair <int,int>&y){
    return x.second < x.first;
}
bool cop(pair<int,int>&x , pair <int,int>&y){
    return x.first < y.first;
}
int main(){
    // vector<int>v = {12,3,4,5,7};
    int arr[5] = {1,5,9,3,19};

    // int maxi = *max_element(v.begin(),v.end());
    // cout << maxi;
    // int maxi1 = *max_element(v.begin()+2,v.end());
    // cout << maxi1;
    // int mini = *min_element(v.begin(),v.end());
    // cout << mini;
    // int max = *max_element(arr,arr+5);
    // cout << max ;
    // int min = *min_element(arr,arr+5);
    // cout << min;
    // int sum = accumulate(v.begin(),v.end(),0);
    // cout << sum << endl ;
    // int s = accumulate(arr, arr+5,0);
    // cout << s << endl;
    // reverse(v.begin(),v.end());
    // for (auto it :v){
    //     cout << it << " " ;
    // }
    // reverse(arr,arr+5);
    // for (int i =0 ; i< 5 ; i++){
    //     cout << arr[i] << " ";
    // }
    // string s = "I love python";
    // // reverse(s.begin(),s.end());
    // // cout << s << endl;
    // char max = *max_element(s.begin(),s.end());
    // cout << max << endl;
    // char min =*min_element(s.begin(),s.end());
    // cout << min << endl;
    // sort(v.begin(),v.end());
    // // sort(v.begin(),v.end(),com)
    // for (auto it : v){
    //     cout << it << " ";
    // }
    // for (int i =0 ; i <5 ;i++){
    //     for (int j =0 ; j < 5 ; j++){
    //         if (arr[i] < arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }

    // }
    // sort(arr,arr+5,com);
    // for (int i =0 ; i< 5 ; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // vector<pair<int,int>>v={{3,1},{1,2},{6,7},{4,5}};
    // sort(v.begin(),v.end()); // sorting based on first element in a pair
    // for (auto it : v){
    //     cout << it.first << " "<<it.second<< endl; 
    // }
    // sort(v.begin(),v.end(),coom); //sorting based on second element in a pair
    // for (auto it : v){
    //     cout << it.first << " "<<it.second<< endl; 
    // }
    // sort(v.begin(),v.end(),cop); //sorting based on second element in a pair
    // for (auto it : v){
    //     cout << it.first << " "<<it.second<< endl; 
    // }

// lambda functions

    // cout << [](int x){return x+2;}(10)<<endl;
    // cout << [](int x,int y){return x+2,y+10;}(10,20) << endl;
    // cout << [](int x,int y){return x+y;}(10,20) << endl ;
    vector<int>v ={2,4,7,-6};
    cout << all_of(v.begin(),v.end(),[](int x){return x > 0 ;})<<endl;
    cout << any_of(v.begin(),v.end(),[](int x){return x%2==0 ;})<<endl;
    cout << none_of(v.begin(),v.end(),[](int x){return x > 0 ;}) <<endl;


}