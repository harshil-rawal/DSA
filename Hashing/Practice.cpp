#include <bits/stdc++.h>
using namespace std;

int getElement(vector<int> arr, int n){
    if(n<2)
     return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;

    for(int i = 0; i<n; i++){
        if(arr[i]<small){
            second_small = small;
            small = arr[i];

        }
        else if (arr[i]<second_small && arr[i] != small){
            second_small = arr[i];
        }
    }
    return second_small;
}




int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin >> arr[i];

    cout << getElement(arr, n);

}