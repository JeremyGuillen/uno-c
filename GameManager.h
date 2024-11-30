//
// Created by guill on 29/11/2024.
//

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "LinkedList.h"

typedef struct GameManager {
   LinkedList* jugador1;
   LinkedList* jugador2;
   int turn;
   LinkedList* cartasJugadas;
} GameManager;

// Metodos de la clase
GameManager* createGameManager();
void jugarTurno(GameManager* gameManager, LinkedList* jugador1);
void cambiarTurno(GameManager* gameManager);

#endif //GAMEMANAGER_H
