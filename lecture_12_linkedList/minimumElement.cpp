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

void minElement(linkedlist list){
    node *min = list.head;
    node *curr = list.head;
    while(curr != NULL){
        if(curr->data <= min->data){
            min = curr;
        }
        curr = curr->next;
    }
    cout << min->data;
}
void removeList(linkedlist list){
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
    minElement(list);
    removeList(list);

    return 0;
}