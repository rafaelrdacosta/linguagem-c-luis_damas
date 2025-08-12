#include<stdio.h>
#include<ctype.h>

#define m_toupper(ch) ((isupper(ch))? (ch): ((ch) - ('a' - 'A')))

int main(){
    char ch = 'B';
    printf("%c\n", m_toupper(ch));

}
