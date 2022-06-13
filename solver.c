#include "solver.h"

int main() {
    printf("Hello, World!\n");
}

void puzzleGenerator(int puzzleArr[9][9]) {
    srand(time(NULL));
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            puzzleArr[i][j] = (int)rand();
        }
    }
}