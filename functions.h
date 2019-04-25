#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <stdio.h>
#define N 10
#define M 10
#define myvalue 1
#define enemy -1
void makeTurn(int n, int m, int field[N][M]);

int IcanWin(int n, int m, int field[N][M]);
int ENEMYcanWin(int n, int m, int field[N][M]);

int ENEMYhasTwoPos(int n, int m, int field[N][M]);
int IhaveTwoPos(int n, int m, int field[N][M]);

int ENEMYhas101(int n, int m, int field[N][M]);
int Ihave101(int n, int m, int field[N][M]);

int IhaveOnePos(int n, int m, int field[N][M]);
int ENEMYhasOnePos(int n, int m, int field[N][M])
;
void FirstMove(int n, int m, int field[N][M]);
#endif // FUNCTIONS_H
