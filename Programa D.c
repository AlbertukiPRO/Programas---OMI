#include <stdio.h>

int main(){

    int x1, x2, y1, y2, canchas = 0, area;
    int areas[2];

    while (canchas!=2){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        area = (x2-x1)*(y2-y1);
        areas[canchas]=area;
        canchas++;
    }
    printf("%d",(areas[0]+areas[1])-1);
    return 0;
}
#pragma clang diagnostic pop