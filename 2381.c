#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 21

int main () {
    int n, k;

    scanf("%d%d", &n, &k);
    
    char nomes[n][MAX_NOME];
    for(int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                // Troca os nomes se estiverem fora de ordem
                char temp[MAX_NOME];
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }

    printf("%s\n", nomes[k - 1]);


    return 0;
}