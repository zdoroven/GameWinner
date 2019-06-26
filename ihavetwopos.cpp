#include <functions.h>
//функция делает ход если у меня есть 2 штуки рядом
int IhaveTwoPos(int n, int m, int field[N][M]){
    int count = 0, i, j, ii, jj, y, g;
    //Проверка если есть возможность дополнить
    //свою линию из 2 штук по вертикали или горизонтали
    for (i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(field[i][j] == myvalue)count++;
            else count = 0;
            if(count == 2){
                if(j + 1 < m){
                    if(field[i][j+1] == 0){
                        g = 0;
                        for(y = i + 1; y < n; y++){
                            if(field[y][j+1] == 0) g=1;
                        }
                        if(g == 0){
                            field[i][j+1] = myvalue;
                            return 1;
                        }
                    }
                }
                if(j > 2){
                    if(field[i][j-2] == 0){
                        g = 0;
                        for(y = i + 1; y < n; y++){
                            if(field[y][j-2] == 0) g=1;
                        }
                        if(g == 0){
                        field[i][j-2] = myvalue;
                        return 1;
                        }
                    }
                }
            }
        }
        count = 0;
    }
    for (j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            if(field[i][j] == myvalue)count++;
            else count = 0;
            if(count == 2){
                if(i > 2){
                    if(field[i-2][j] == 0){
                        g = 0;
                        for(y = i-1; y < n; y++){
                            if(field[y][j] == 0)g = 1;
                        }
                        if(g == 0){
                            field[i-2][j] = myvalue;
                            return 1;
                        }
                    }
                }
            }
        }
        count = 0;
    }
    //Проверка если есть возможность завершить
    //свою линию по диагонали слева направо
    for(i = n - 1; i >=0; i--){
        ii = i;
        count = 0;
        for(j = 0; ii < n && j < m; j++){
            if(field[ii][j] == myvalue) count++;
            else count = 0;
            if(count == 2){
                if(ii < n - 1 && j < m - 1){
                    if(field[ii+1][j+1] == 0){
                        g = 0;
                        for(y = ii+2; y < n; y++){
                            if(field[y][j+1] == 0)g = 1;
                        }
                        if(g == 0){
                            field[ii+1][j+1] = myvalue;
                            return 1;
                        }
                    }
                }
                if(ii > 1 && j > 1){
                    if(field[ii-2][j-2] == 0){
                        g = 0;
                        for(y = ii-1; y < n; y++){
                            if(field[y][j-2] == 0)g = 1;
                        }
                        if(g == 0){
                            field[ii-2][j-2] = myvalue;
                            return 1;
                        }
                    }
                }
            }
            ii++;
        }
    }
    for(j = 0; j < m; j++) {
        jj = j;
        count = 0;
        for(i = 0; i < n && jj < m; i++){
            if(field[i][jj] == myvalue)count++;
            else count = 0;
            if(count == 2){
                if(jj < m - 1 && i < n - 1){
                    if(field[i+1][jj+1] == 0){
                        g = 0;
                        for(y = i + 2; y < n; y++){
                            if(field[y][jj+1])g=1;
                        }
                        if(g==0){
                            field[i+1][jj+1] = myvalue;
                            return 1;
                        }
                    }
                }
                if(jj > 1 && i > 1){
                    if(field[i-2][jj-2] == 0){
                        g = 0;
                        for(y = i-1; y < n;y++){
                            if(field[y][jj-2]==0)g = 1;
                        }
                        if(g == 0){
                            field[i-2][jj-2] = myvalue;
                            return 1;
                        }
                    }
                }
            }
            jj++;
        }
    }
    //Проверка если есть возможность завершить
    //свою линию по диагонали справа налево
    for(i = n - 1; i >= 0; i--){
        count = 0;
        ii = i;
        for(j = m; ii < n && j >= 0; j--){
            if(field[ii][j] == myvalue)count++;
            else count = 0;
            if(count == 2){
                if(ii < n - 1 && j > 0){
                    if(field[ii+1][j-1] == 0){
                        g = 0;
                        for(y = ii + 2; y < n; y++){
                            if(field[y][j-1]==0)g=1;
                        }
                        if(g == 0){
                            field[ii+1][j-1] = myvalue;
                            return 1;
                        }
                    }
                }
                if(ii > 1 && j < m - 2){
                    if(field[ii-2][j+2] == 0){
                        g = 0;
                        for(y = ii - 1; y < n; y++){
                            if(field[y][j+2]==0)g=1;
                        }
                        if(g == 0){
                            field[ii-2][j+2] = myvalue;
                            return 1;
                        }
                    }
                }
            }
            ii++;
        }
    }
    for(j = m - 1; j >= 0; j--){
        jj = j;
        count = 0;
        for(i = 0; i < n && jj >= 0; i++){
            if(field[i][jj] == myvalue)count++;
            else count = 0;
            if(count == 2){
                if(i > 1 && jj < m - 2){
                    if(field[i-2][jj+2] == 0){
                        g = 0;
                        for(y = i - 1; y < n; y++){
                            if(field[y][jj+2] == 0) g = 1;
                        }
                        if(g == 0){
                            field[i-2][jj+2] = myvalue;
                            return 1;
                        }
                    }
                }
                if(i < n - 1 && jj > 0){
                    if(field[i+1][jj-1] == 0){
                        g = 0;
                        for(y = i+2; y < n; y++){
                            if(field[y][jj-1] == 0) g = 1;
                        }
                        if(g == 0){
                            field[i+1][jj-1] = myvalue;
                            return 1;
                        }
                    }
                }
            }
            jj--;
        }
    }
    return 0;
}
