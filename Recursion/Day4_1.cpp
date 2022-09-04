#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

void printByRecursion(Node* head){
    // Base case
    if(head == NULL){
        return;
    }

    // printing link list
    cout<<head -> data<<" ";

    // recursion call
    printByRecursion(head -> next);
}

void getLength(Node* head, int& len) {
    //base case
    if(head == NULL)
        return;

    //1 case
    len++;

    //baki recursion -> recursive call
    getLength(head -> next, len);
}

// void printKFromEnd(Node* head, int& k) {
//     //base case
//     if(head == NULL)
//         return;
    
//     //Recursion Call
//     printKFromEnd(head->next, k);

//     //wapas
//     k--;

//     if(k == 0)
//         cout << head -> data << endl;
// }

void PrintKFromEndRecursion(Node *head, int& k){
    if(head == NULL){
        return;
    }

    PrintKFromEndRecursion(head -> next, k);

    k--;

    if(k == 0){
        cout<<head -> data;
    }
}

void getLengthRecursive(Node *head, int& length){
    if(head == NULL){
        return;
    }

    length++;

    getLengthRecursive(head -> next, length);
}


// void reverseRecursive(Node *head){
//     if(head == NULL){
//         return;
//     }

//     reverseRecursive(head -> next);

//     cout<<head -> data<<"  ";
// }



Node* reverse(Node* head) {
    //base case
    if(head == NULL || head -> next == NULL ) {
        return head;
    }

    Node* chotaHead = reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotaHead;
}

Node* reverseIterative(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    Node* forward;

    while(curr != NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* kReverse(Node* head, int k ) {
    //base case
    if(head == NULL)
        return NULL;

    //1 case -> first group of k nodes -> reverse
    Node* prev = NULL;
    Node* curr = head;
    Node* forward;
    int count = 0;

    while(curr != NULL && count < k) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //check next is null or ont
    Node* recursionKaAns = NULL;
    if(forward != NULL)
        recursionKaAns = kReverse(forward, k);

    head -> next = recursionKaAns;
    
    return prev;
}


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    Node* root = new Node(5);
    head = tail = root;

    insertAtTail(tail, 4);
    // insertAtTail(tail, 1);
    // insertAtTail(tail, 3);
    // insertAtTail(tail, 2);

    // int k = 1;
    // printByRecursion(head);
    // PrintKFromEndRecursion(head, k);
   
//    int length = 0;
//    getLengthRecursive(head, length);
//    cout<<length;


    reverseRecursive(head);



    // insertAtTail(tail, 2);
    // insertAtTail(tail, 3);
    // insertAtTail(tail, 4);
    // insertAtTail(tail, 5);
    // insertAtTail(tail, 6);

    // print(head);
    // cout << endl;

    // // head = reverse(head);
    // // print(head);
    // // cout << endl;

    // int k = 4;
    // head = kReverse(head, k);
    // print(head);
    // cout << endl;

    // // int k = 2;
    // // printKFromEnd(head, k);
    // // if( k > 0)
    // //     cout << " ans not found " << endl;

    return 0;
}