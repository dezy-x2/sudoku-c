#include "solver.h"

int main() {
    printf("Hello, World!\n");
    int newPuzzle[9][9];
    puzzleGenerator(newPuzzle);
    printPuzzle(newPuzzle);
}

void puzzleGenerator(int puzzleArr[9][9]) {
    srand(time(NULL));
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            puzzleArr[i][j] = (int)(rand() % 10);
        }
    }
}

void printPuzzle(int puzzleArr[9][9]) {
    printf("-------------------------------------\n");
    for (int i=0; i<9; i++) {
        printf("| ");
        for (int j=0; j<9; j++) {
            printf("%d | ", puzzleArr[i][j]);
        }
        printf("\n-------------------------------------\n");
    }
}