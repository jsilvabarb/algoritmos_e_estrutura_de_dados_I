/*
    Código referente ao algoritmo sudoku solicitado pelo 
    Professor Arlindo

    Regras:
    [] Cada linha e coluna deve conter todos os números de 1 a 9
    [] As submatrizes 3 x 3 devem conter todos os n°s de 1 a 9
*/

#include <stdio.h>

#define TAM 9

int main () {

  int qtdMatrizes;
  // int matrizes[qtdMatrizes];

  int matriz[TAM][TAM];
  int matrizValida = 1;

  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  // Validação das linhas
  for (int l = 0; l < TAM; l++) {
    int numerosLinha[TAM];
    //int numerosColuna[TAM];

    for (int c = 0; c < TAM; c++) {
      numerosLinha[c] = matriz[l][c];
    }

    // for (int i = 0; i < TAM; i++) {
    //   if (numerosLinha[i] < 1 || numerosLinha[i] > 9) {
    //     matrizValida = 0;
    //   }
    // }
      
    printf("\n");
  }

  return 0;
}
