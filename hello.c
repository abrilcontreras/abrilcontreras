#include <stdio.h>

int main(void) {

    char name[30];

    printf("quien sos?");
    gets(name);
    // scanf("%s", name);
    printf("hola %s!", name);

    return 0;
}