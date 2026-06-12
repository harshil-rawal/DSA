//Linked list- Not contigous loction
//How to traverse - the previous elemt is assigned its next, head is the first memory location and tail is the last;
//used in stack & Queue
//Rea life example - Browser tab

#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int searchForTheElement(Node* head, int val){
     Node* temp = head;
    while(temp){
        if(temp->data==val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {2, 5, 7, 8};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    cout << searchForTheElement(head, 0);
}

