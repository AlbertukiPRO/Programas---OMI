#include <stdio.h>

int main(){
    int r=0, s=0, b=0;
    scanf("%i %i %i",&r,&s,&b);

    int res = r*s;
    printf("%i %i", res,b-res);

    return 0;
}