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
// at head
Node* insert(Node* head, int val){
    return new Node(val, head);
}

//at tail
Node* insertTail(Node* head, int val){
    if(head==NULL) return new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

//at Kth elment
Node* insertAtK(Node* head, int el, int k){
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new Node(el, head);
    }
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

//before val x
Node* insertBeforeVal(Node* head, int el, int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return new Node(el, head);
    }
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print(Node* head){   //print function
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
int main(){
    vector<int> arr = {2, 4, 6, 8};
    Node* head = convertArr2LL(arr);
    head = insertBeforeVal(head,100, 6);
    print(head);
}