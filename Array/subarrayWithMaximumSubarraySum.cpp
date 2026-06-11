#include <bits/stdc++.h>
using namespace std;

vector<int> subarray(vector<int> nums){
    vector<int> ans;
    int n = nums.size();

    long long sum = 0;
    long long currSum = LLONG_MIN;

    int start = 0;
    int ansStart = -1, ansEnd = -1;

    for(int i = 0; i < n; i++){

        if(sum == 0) start = i;

        sum += nums[i];

        if(sum > currSum){
            currSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    for(int j = ansStart; j <= ansEnd; j++){
        ans.push_back(nums[j]);
    }

    return ans;
}

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    vector<int> result = subarray(nums);

    for(int x : result){
        cout << x << " ";
    }
}