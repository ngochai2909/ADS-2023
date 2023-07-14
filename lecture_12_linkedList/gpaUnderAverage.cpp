#include<bits/stdc++.h>
using namespace std;

struct node{
    double data;
    node *next;
};
node *createnode(double x){
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

void insertTail(linkedlist &list, double x){
    node *p = createnode(x);
    if(list.head != NULL){
        list.tail->next = p;
        list.tail = p;
    }else{
        list.head = list.tail = p;
    }
}

void gpaUnderAvg(linkedlist list){
    node *curr = list.head;
    while(curr != NULL){
        if(curr->data < 5){
             cout << curr->data << endl;
        }
        curr = curr->next;
    }
    
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
        double x;
        cin >> x;
        if(x == -1){
            break;
        }else{
            insertTail(list,x);
        }
    }
    gpaUnderAvg(list);
    removeList(list);

    return 0;
}