#include <functions.h>
//функция делает ход если у соперника 1 стоящая отдельно штука
int ENEMYhasOnePos(int n, int m, int field[N][M]){
    int i, j, y, g;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(field[i][j] == enemy){
                if(field[i][j+1] == 0){
                    g = 0;
                    for(y = i + 1; y < n; y++){
                        if(field[y][j+1] == 0){
                            g = 1;
                        }
                        if(g == 0){
                            field[i][j+1] = myvalue;
                            return 1;
                        }
                    }
                }
                if(field[i][j-1] == 0){
                    g = 0;
                    for(y = i + 1; y < n; y++){
                        if(field[y][j-1] == 0){
                            g = 1;
                        }
                        if(g == 0){
                            field[i][j-1] = myvalue;
                            return 1;
                        }
                    }
                }
                if(field[i-1][j] == 0){
                    if(field[i-1][j] == 0){
                        field[i-1][j] = myvalue;
                        return 1;
                    }
                }
            }
        }
    }



    return 0;
}
