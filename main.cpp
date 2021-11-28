#include<stdio.h>
#include<iostream>
#include<string>

#include "linkedlist.cpp"

int main(){
    //init object
    Linkedlist ll;

    ll.insertAtLast("one","A");
    ll.insertAtLast("two","B");
    ll.insertAtLast("three","C");
    ll.insertAtLast("four","D");
    ll.print();
    ll.insertAtLast("five","F");
    ll.print();
    return 0;
}