#include <bits/stdc++.h>
using namespace std;

int sqrt(int n){
    int low = 1;
    int high = n;
    int mid;
    while(low<=high){
        mid = low+(high-low)/2;
        if((mid*mid)>n){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return high;
}

int main(){
    int n;
    cin >> n;
    cout<< sqrt(n);

}
