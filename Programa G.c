#include <stdio.h>

int main(){
    int n, mayor, menor, i, avg=0;
    scanf("%i",&n);
    int x[n];

    for (i = 0; i < n; i++) {
        scanf("%i",&x[i]);
    }
    mayor=x[0];
    menor=mayor;
    avg=x[0];

    for (i = 1; i < n; i++) {
        if (mayor>=x[i])
            mayor=x[i];
        if (x[i]>menor)
            menor=x[i];
        avg+=x[i];
    }

    printf("%i %i %i",mayor,menor,(int)avg/n);
    return 0;
}
