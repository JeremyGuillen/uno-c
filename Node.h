//
// Created by guill on 29/11/2024.
//

#ifndef NODE_H
#define NODE_H

// Estructura para representar un nodo
typedef struct Node {
    int data;              // Dato almacenado en el nodo
    struct Node* next;     // Puntero al siguiente nodo
} Node;

// Prototipos de funciones para manejar nodos
Node* createNode(int data);

#endif // NODE_H