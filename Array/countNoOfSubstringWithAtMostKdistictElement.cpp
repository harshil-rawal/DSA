#include <bits/stdc++.h>
using namespace std;

int atMostDistinct(string s, int k){
    int left=0, res=0;
    unordered_map<char, int> freq;

    for(int right=0; right<s.size(); right++){
        freq[s[right]]++;
        while(freq.size()>k){
            freq[s[left]]--;
            if(freq[s[left]]==0) freq.erase(s[left]);
            left++;
        }
        res+=(right-left+1);
    }
    return res;

}

int countSubstrings(string s, int k){
    return atMostDistinct(s, k)- atMostDistinct(s, k-1);
}

int main(){
    string s = "pqpqs";
    int k = 2;
    cout << "Count: " << countSubstrings(s, k) << endl;
    return 0;
}