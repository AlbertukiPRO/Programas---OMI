#include <stdio.h>

int main() {
    int num, deno, resultado, segundadivicion, resta;

    scanf("%d %d",&num,&deno);

    // num => 371, deno=> 5;
    resultado = num/deno; //74
    segundadivicion = deno*(int)resultado; //370
    resta = num-segundadivicion;

    if (resta!=0)
        printf("%d ( %d / %d )",resultado,resta,deno);
    else
        printf("%d",resultado);
}
