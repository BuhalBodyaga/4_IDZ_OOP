//
// Created by genri on 21.01.2023.
//

#include <vector>
#include <iostream>
#include "source.h"

using namespace std;

struct Node
{
    int value;
    struct Node* next;
};

struct Buff
{
    Node* head=nullptr;
    Node* tail=nullptr;
    int size;
};

Buff* init(int size) {

    Buff* buffer = new Buff();
    buffer->size=size;

    for (int i = 0; i < buffer-> size; i++) {


        Node* new_node = new Node();
        new_node->next = nullptr;

        if (buffer->tail != nullptr){
            buffer->tail->next = new_node;
            buffer->tail = new_node;
        }

        else{
            buffer->head = new_node;
            buffer->tail = new_node;
        }
    }

    buffer->tail->next=buffer->head;
    buffer->tail=buffer->head;
    return buffer;
};

void addNode(Buff* buffer, int value){
    Node* curr_el = buffer->tail;
    curr_el->value=value;
    buffer->tail=curr_el->next;
};

void print(Buff* buffer, std::ostream &os){

    Node* curr_el = buffer->head;

    for (int i=0; i<buffer->size; i++){
        if (curr_el->value!=0){
            os << curr_el->value<<" ";
            curr_el = curr_el->next;
        }}

}

