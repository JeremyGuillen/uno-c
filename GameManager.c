//
// Created by guill on 29/11/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "GameManager.h"
GameManager* createGameManager() {
    GameManager* gameManager = malloc(sizeof(GameManager));
    if (!gameManager) {
      printf("Error allocating memory for GameManager\n");
      exit(EXIT_FAILURE);
    }
    gameManager->jugador1 = createLinkedList();
    gameManager->jugador2 = createLinkedList();
    gameManager->turn = 0;
    return gameManager;
}

void cambiarTurn(GameManager* gameManager) {
  if (gameManager->turn == 0) {
    gameManager->turn = 1;
  } else {
    gameManager->turn = 0;
  }
}