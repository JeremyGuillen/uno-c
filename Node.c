//
// Created by guill on 29/11/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

// Función para crear un nodo nuevo
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Error al asignar memoria.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
