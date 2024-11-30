//
// Created by guill on 29/11/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// Función para inicializar una lista enlazada vacía
LinkedList* createLinkedList() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    if (!list) {
        printf("Error al asignar memoria.\n");
        exit(EXIT_FAILURE);
    }
    list->head = NULL;
    return list;
}

// Función para insertar un elemento al principio de la lista
void insertAtHead(LinkedList* list, int data) {
    Node* newNode = createNode(data);
    newNode->next = list->head;
    list->head = newNode;
}

// Función para imprimir los elementos de la lista
void printList(LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Función para eliminar un nodo con un valor específico
void deleteNode(LinkedList* list, int key) {
    Node* current = list->head;
    Node* previous = NULL;

    // Caso especial: si el nodo a eliminar es la cabeza
    if (current != NULL && current->data == key) {
        list->head = current->next;
        free(current);
        return;
    }

    // Buscar el nodo a eliminar
    while (current != NULL && current->data != key) {
        previous = current;
        current = current->next;
    }

    // Si no se encontró el nodo
    if (current == NULL) {
        printf("Elemento %d no encontrado.\n", key);
        return;
    }

    // Desvincular el nodo y liberarlo
    previous->next = current->next;
    free(current);
}

// Función para liberar toda la memoria de la lista
void freeList(LinkedList* list) {
    Node* current = list->head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    free(list);
}

