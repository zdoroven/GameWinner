//Функция делаеющая следующий ход в "крестики-нолики до 4 в линию", на вход размеры поля и массив поля,
// заранее объявить глобальную переменную myvalue == 1 или -1
#include "functions.h"

void makeTurn(int n, int m, int field[N][M]){
    int k = 0;
    k = IcanWin(n, m, field);
    if(k == 1) return;
    k = ENEMYcanWin(n, m, field);
    if(k == 1) return;
    k = ENEMYhasTwoPos(n, m, field);
    if(k == 1) return;
    k = IhaveTwoPos(n, m, field);
    if(k == 1) return;
    k = Ihave101(n, m, field);
    if(k == 1) return;
    k = ENEMYhas101(n, m, field);
    if(k == 1) return;
    k = IhaveOnePos(n, m, field);
    if(k == 1) return;
    k = ENEMYhasOnePos(n, m, field);
    if(k == 1) return;
    FirstMove(n, m, field);
    return;
}
