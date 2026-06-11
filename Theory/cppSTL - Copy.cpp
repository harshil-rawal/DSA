// 1. Algorithms
// 2. containers
// 3. Functions
// 4. Iterators
#include<iostream>
using namespace std;

//pairs:part of utility library
void explainPair(){
    pair<int, int> p = {1, 3};
    cout<<p.first<< " " << p.second;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}

//Iterator
void explainVector(){
    
   
}