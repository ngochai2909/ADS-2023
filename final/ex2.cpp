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
struct linkedList{
    node *head;
    node *tail;
};

void createLinkedList(linkedList &list){
    list.head = NULL;
    list.tail = NULL;
}

void insertTail(linkedList &list, int x){
    node *p = createNode(x);
    if(list.head == NULL){
        list.head = list.tail = p;
    }else{
        list.tail->next = p;
        list.tail = p;
    }
}
void compare(linkedList list1, linkedList list2){
    node *curr1 = list1.head;
    while(curr1 != NULL ){
        // cout << curr1->data << " ";
        // curr = curr->next;
        for(node *i = list2.head; i != NULL; i->next ){
            if(curr1 == i){
                cout << i << " ";
            }else{
                i->next;
            }
        }
        curr1 = curr1->next;
    }
}
int main(){
    int x1,x2;
    linkedList list1;
    linkedList list2;
    createLinkedList(list1);
    createLinkedList(list2);
    // for(int i = 0; i < n1; i ++){
    //     int x ;
    //     cin >> x;
    //     if(x == -1)
    //         break;
    //     insertTail(list1, x);
    // }
    while( true){
        cin >> x1;
        if(x1 == -1){
            break;
        }
        insertTail(list1, x1);
    }
    while( true){
        cin >> x2;
        if(x2 == -1){
            break;
        }
        insertTail(list2, x2);
    }
    
    // node *curr = list.head;
    // while(curr != NULL){
    //     cout << curr->data << " ";
    //     curr = curr->next;
    // }
    compare(list1, list2);
    return 0;
}