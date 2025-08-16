#include<stdio.h>

/*Defina a macro  Vizinhanca(x, y, Delta)
Que verifica se x est� em uma vizinhan�a
de Delta de y, isto �, se
|x-y| < Delta
*/

#define ABS(x) ((x>0)?(x):-(x))
#define Vizinhanca(x,y,Delta) (ABS((x)-(y))<(Delta))

int main(){
    printf("%d\n", Vizinhanca(2, 3, 8));
}
