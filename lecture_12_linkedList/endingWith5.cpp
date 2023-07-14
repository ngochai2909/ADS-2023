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
bool endWith5(int x){
    if(x < 0){
        x = -x;
    }
    if(x % 10 == 5 ){
        return true;
    }
    return false;
}
void deleteEndingWith(linkedlist &list){
   if (list.head == NULL) {
    return;
  }
 
  while (list.head && abs(list.head->data) % 10 == 5) {
    node * node = list.head->next;
    delete list.head;
    list.head = node;
  }

  if (list.head == NULL) {
    return;
  }
 
  node * pre = list.head;
  node * cur = list.head->next;
  while (cur) { // i < n
    if (abs(cur->data) % 10 == 5) {
      node * node = cur->next;
      delete cur;
      pre->next = node;
      cur = pre;
    }
    pre = cur;
    cur = cur->next; // i = i + 1
  }
}
void removeAll(linkedlist &list){
    while(list.head != NULL){
        node *curr = list.head;
        list.head = list.head->next;
        delete curr;
    }
    list.tail = NULL;
}
void print(linkedlist list){
    node  *curr = list.head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
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
    deleteEndingWith(list);
    print(list);
    removeAll(list);
    return 0;
}