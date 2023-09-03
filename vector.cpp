#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(5);
    int len =v.size();
    cout << len << endl;
    // for (auto it  : v ){
    //     cout << it << " " ;
    // }
    sort(v.begin(), v.end());
    for (auto it  : v ){
        cout << it << " " << endl;
    }
    reverse(v.begin(),v.end());
    for (auto it  : v ){
        cout << it << " " ;
    }
}