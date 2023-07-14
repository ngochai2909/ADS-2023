#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }else{
        for(int i = 2; i <= sqrt(n); i ++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}
struct node{
    int data;
    node *next;
};
node *createnode(int x){
    node *p = new node;
    p->data = x;
    p->next = NULL;
    return p;
}

struct linkedlist{
    node *head;
    node *tail;
};

void createLinkedList(linkedlist &list){
     list.head = NULL;
     list.tail = NULL;
};

void insertTail(linkedlist &list, int x){
    node *p = createnode(x);
    if(list.head != NULL){
        list.tail->next = p;
        list.tail = p;
    }else{
        list.head = list.tail = p;
    }
}

void countPrime(linkedlist list){
    node *curr = list.head;
    int count = 0;
    while(curr != NULL){
        if(isPrime(curr->data)){
            count += 1;
        }
        curr = curr->next;
    }
    cout << count;
}
void removeList(linkedlist &list){
    while(list.head != NULL){
        node *curr = list.head;
        list.head = list.head->next;
        delete curr;
    }
    list.tail = NULL;
}

int main(){
    linkedlist list;
    createLinkedList(list);
    while(true){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }else{
            insertTail(list,x);
        }
    }
    countPrime(list);
    removeList(list);

    return 0;
}