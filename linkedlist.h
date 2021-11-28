#include <stdio.h>
#include <iostream>
#include<string>

//header guards
#ifndef LINKEDLIST_H
#define   LINKEDLIST_H

 //node
struct Node{
        std::string key;
        std::string value;
        Node* next;
    };



class Linkedlist{

private:
   
    Node* head;

public:
    //constructor
    Linkedlist();
    
    Node* createNode(std::string key, std::string value);

    void insertAtLast(std::string key, std::string value);

    void print();
};

#endif