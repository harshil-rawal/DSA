#include <bits/stdc++.h>
using namespace std;

int missingElement(vector<int> arr, int n){
    int ans = 0;
    for(int i = 0; i<=n; i++){
        ans ^= i;
    }

    for(int num: arr){
        ans ^= num;
    }
    return ans;
}

