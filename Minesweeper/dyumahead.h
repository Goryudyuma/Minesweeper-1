#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tate 6       //縦の広さ
#define yoko 6       //横の広さ
#define bombnumber  5//爆弾の数

#define bomb -1 //いじるな(負の整数なら多分大丈夫かも。)

int BAN[10][tate + 2][yoko + 2];
int endflag=3;
int number;
