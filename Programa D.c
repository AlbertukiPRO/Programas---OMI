#include <stdio.h>

int main(){

    int x1, x2, y1, y2, canchas = 0, area;
    int res;

    while (canchas!=2){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        res+=(x2-x1)*(y2-y1);
        canchas++;
    }
    printf("%d",res-1);
    return 0;
}