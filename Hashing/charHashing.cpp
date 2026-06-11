#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int hash[26] = {0};
    for(int i=0; i<s.size();i++){
        hash[s[i]-'a']++;

    
    }
    

    int n;
    cin >> n;
    while(n--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c-'a'] << endl;
    }


}