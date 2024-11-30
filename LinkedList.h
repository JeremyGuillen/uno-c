//
// Created by guill on 29/11/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

typedef struct LinkedList {
    Node* head; // Puntero al primer nodo de la lista
} LinkedList;

// Prototipos de funciones para manejar la lista enlazada
LinkedList* createLinkedList();
void insertAtHead(LinkedList* list, int data);
void printList(LinkedList* list);
void deleteNode(LinkedList* list, int key);
void freeList(LinkedList* list);

#endif //LINKEDLIST_H
