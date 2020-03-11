/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>

void suma(int *n1, int *n2, int *n3, int *res){
    *res=*n1+*n2+*n3;
}
void resta(int *n1, int *n2, int *n3, int *res){
    *res=*n1-*n2-*n3;
}

int main(){
    int var1=6, var2=4, var3=7, var4=0;
    int * var1_ap;
    suma(&var1,&var2,&var3,&var4);
    var1_ap=&var4;
    printf("%p %d\n", var1_ap, *var1_ap);
    resta(&var1,&var2,&var3,&var4);
    printf("%p %d\n", var1_ap, *var1_ap);
    return 0;
}
