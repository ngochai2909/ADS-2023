#include<bits/stdc++.h>
using namespace std;

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
void insertOrder(linkedlist &list){
    if (list.head == NULL) return;

    node * p = createnode(1);
    p->next = list.head;
    list.head = p;

    int i = 2;
    node * cur = list.head->next;

    while (cur->next != NULL) {
        p = createnode(i);
        p->next = cur->next;
        cur->next = p;
        cur = p->next;
        i++;
    }
}
void print(linkedlist list){
    node *cur = list.head;
    while(cur != NULL){
        cout << cur->data << " ";
        cur = cur->next;
    }
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
        if(x == 0){
            break;
        }else{
            insertTail(list,x);
        }
    }
    insertOrder(list);
    print(list);
    removeList(list);

    return 0;
}