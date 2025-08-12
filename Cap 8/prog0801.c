#include<stdio.h>

main(){
    int x = 5, *px = &x;
    float y = 5.0, *py = &y;

    printf("%d\n", sizeof(int));
    printf("%d %ld\n", x, (long)px);
    printf("%d %ld\n", x + 1, (long)(px + 1)); /* px + 1 == px + sizeof(int) */

    printf("%d\n", sizeof(float));
    printf("%.2f %ld\n", y, (long)py);
    printf("%.2
           f %ld\n", y + 1, (long)(py + 1)); /* py + 1 == py + sizeof(float) */
}
