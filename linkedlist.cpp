#include<stdio.h>
#include<iostream>
#include<string>

#include "linkedlist.h"

//implemenation phase

//constructor
Linkedlist::Linkedlist(){
    head = NULL;

}

Node* Linkedlist::createNode(std::string key, std::string value){
        //allocate memory in heap
        Node* temp =  new Node();

        temp->key = key;
        temp->value = value;
        temp->next = NULL;
        return temp;
}


void Linkedlist::insertAtLast(std::string key, std::string value){
    Node* newNode = createNode(key,value);
    //pointer to pointer to deal with head as global
    Node** headRef = &head;
    
    //a temp pointer to head  - *headRef : value at the address contained in headref is head address
    
    Node* current = *headRef;

    //empty list
    if (current == NULL){
        *headRef = newNode;
        return;
    }
    //go to last node 
    while(current->next != NULL){
        current = current ->next;
    }
    current->next = newNode;    
}

void Linkedlist::print(){
    Node* temp = head;
    //empty case
    if(temp == NULL) return;
    while(temp != NULL){
        std::cout<<temp->key<<":"<<temp->value<<" ";
        temp = temp->next;
    }
    printf("\n");
}
