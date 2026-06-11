//1. for the outer loop, count the no. of lines
//2. for the inner loop, focus on the columns, and connect them somehow to the rows
//3.print them '*' insid the inner loop
//4. observe symmetry(optional)


#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<"*";
            
        }
        cout << endl;

    }
}


void pattern2(int n){
    for(int i = 0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


void pattern3(int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


void pattern4(int n){
    for(int i = 0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout <<" ";
        }
        for(int k=0; k<2*i+1; k++){
            cout <<"*";
        }
        for(int l=0; l<n-i-1; l++){
            cout <<" ";
        }
        cout<< endl;
    }
}


void pattern5(int n){
    for(int i = 0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout <<" ";
        }
        for(int k=0; k<2*n-(2*i+1); k++){
            cout <<"*";
        }
        for(int l=0; l<i; l++){
            cout <<" ";
        }
        cout<< endl;
    }
}


void pattern6(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout << start;
            start = 1 - start;

        }
        cout << endl;

    }
}


void pattern7(int n){      //space between symmetrical pattern is not removed THINK  OF IT!!
    for(int i=0; i<=n/2; i++){
        int x = 2*i;
        
    
        for(int j=0; j<(n-x)/2; j++){
            cout << "*";
        }
        for(int k=1; k<x; k++){
            
            cout << " ";

        }
        for(int l=0; l<(n-x)/2; l++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=n/2-1; i>=0; i--){
        int x = 2*i;
        
        for(int j=0; j<(n-x)/2; j++){
            cout << "*";
        }
        for(int k=1; k<=x; k++){
            cout << " ";

        }
        for(int l=0; l<(n-x)/2; l++){
            cout << "*";
        }
        cout << endl;
    
    }
}    


 

int main(){
    int n;
    cin >> n;
    
    pattern7(n);
}
