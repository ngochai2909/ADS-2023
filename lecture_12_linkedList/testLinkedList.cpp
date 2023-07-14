#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *createNode(int x){
    node *p = new node;
    p->data = x;
    p->next = NULL;
    return p;
}

struct linkedlist{
    node *head;
    node * tail; 
};
void createList(linkedlist &list){
    list.head = NULL;
    list.tail = NULL;
}
void insertTail(linkedlist &list, int x){
    node *p = createNode(x);
    if(list.head != NULL){
        list.tail->next = p;
        list.tail = p;
    }else{
        list.head = list.tail = p;
    }
}
void removeAll(linkedlist list){
    while(list.head != NULL){
        node *curr = list.head;
        list.head = list.head->next;
        delete curr;
    }
    list.tail = NULL;
}
int main(){
    int n;
    cin >> n;
    linkedlist list;
    createList(list);
    for(int i = 0; i < n; i ++){
        int x;
        cin >> x;
        insertTail(list,x);
    }
    node  *curr = list.head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }

    removeAll(list);
    return 0;
}