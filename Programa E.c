#include <stdio.h>

int main(){
    int f, frutas = 1, i=1;

    scanf("%i",&f);

    do{
        frutas = i*11+1;
        i++;
    }while(frutas % f != 0);

    printf("%i %i",((int)i/2)-1,frutas);

    return 0;
}