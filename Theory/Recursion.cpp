//Recursion:When a function calls itself until a speciffied condition is met.

#include<iostream>
#include<vector>
using namespace std;

// void print5Times(string name, int i){
    
//     if(i>=5) return; // base case

//     cout << name << endl;
//     print5Times(name, i+1);
//     i++;
// }

// int main(){
//     string name = "samridhi";
    
//     print5Times(name, 0);
// }

// void print1toN(int i, int n){
//     if(i>n) return;
//     cout << i << endl;
    
//     print1toN(i+1, n);
// }

// int main(){
//     int i = 1, n = 10;
    
//     print1toN(i,n);
// }

// void sumofn(int i, int sum){  //parameterised recursion
//     if(i<1){
//         cout << sum;
//         return;
//     }
//     sumofn(i-1, sum+i);
// }

// int main(){
//     sumofn(10,0);
// }

// int sumofn1(int n){  //functional recursion
//     if(n==0) return 0;
//     else{
//         return n+sumofn1(n-1);



//     }
// }

// int main(){
//     cout << sumofn1(3);
// }


// int fact(int n){  //functional recursion
//     if(n==0) return 1;
//     else{
//         return n*fact(n-1);
//     }
// }

// int main(){
//     cout << fact(3);
// }

// void reverseArr(int arr[], int start, int end){
//     if(start>=end) return;
    
//     swap(arr[start], arr[end]);
//     reverseArr(arr, start+1, end-1);
// }

// int main(){
//     int arr[5]= {1, 2, 3, 4, 5};
//     reverseArr(arr, 0, 4);
//     for(int x : arr){
//         cout << x << " "; 
//     }
// }

// //"RECURSIVVE WAY OF PRINTING ALL THE SUBSEQUENCE OF AN ARRAY"
// void subsequence(int i, vector<int> &ds, int arr[], int n){
//     if(i>=sizeof(arr)){
//         for(auto it : ds){
//             cout << it << " "; 
//         }
//         if(ds.size()==0){
//             cout << "{}"; 
//         }
//         cout << endl;
//         return;
//     }
//     ds.push_back(arr[i]);  //take or pick particular index into the subsequence.
//     subsequence(i+1, ds, arr, n);    
//     ds.pop_back();  //not pick, or not take condition, this element is not added to your subsequence.

//     subsequence(i+1, ds, arr, n);
// }

// int main(){
//     int arr[] = {3, 1, 2};
//     int n = 3;
//     vector<int> ds;
//     subsequence(0, ds, arr, n);

//     return 0;
// }


