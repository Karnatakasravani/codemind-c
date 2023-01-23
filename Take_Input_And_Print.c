#include<stdio.h>
int main(){
    char name[30];
    printf("");
    fgets(name,sizeof(name),stdin);
    printf("");
    puts(name);
}
