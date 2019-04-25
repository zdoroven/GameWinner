#include "functions.h"

void makeTurn(int n, int m, int field[N][M]);

int main(){
    int n = N;
    int m = M;
    int field[N][M];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            field[i][j] = 0;
        }
    }

    field[n-1][0] = enemy;
    field[n-1][2] = enemy;

    makeTurn(n, m, field);

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%2d", field[i][j]);
        }
        printf("\n");
    }

}
