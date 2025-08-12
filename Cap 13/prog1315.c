#include<stdio.h>


#define FIRST 'A'
#define LAST 'Z'

#define toupper(ch) (((ch) >='A' && (ch) <= 'Z')? (ch): ((ch) - ('a' - 'A')))

main(){
    int ch = 65; /*ASCII de 'A'*/
    printf("%c %c\n", toupper(FIRST+2), toupper(LAST+'a'-ch));
}
