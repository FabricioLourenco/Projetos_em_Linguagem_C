#include <stdio.h>

int main(){

    char s[10];

    printf("Digite algo(scanf convencional):\n");
    scanf("%s", s);
    fflush(stdin);

    printf("Digite algo(scanf aprimorado):\n");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    return 0;
}