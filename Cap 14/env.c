#include<stdio.h>

int main(int argc, char **argv, char **env){
    char *ptr;

    while(*env!=NULL){
        ptr = strchr(*env, '=');
        if(ptr!=NULL){
            *ptr = '\0';
            printf("%s --> %s\n", *env, ptr+1);
        }env++;
    }
    return 0;
}
