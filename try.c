#include <stdio.h>

int main() {
    int val1, val2, resultadd, resultsub, resultmul;
    float resultdiv;
    //add
    scanf("%d %d" , &val1, &val2);
    resultadd = val1 + val2;
    
    //sub
    resultsub = val1 - val2;
    //mul
    resultmul = val1 * val2;
    //div 2
    resultdiv = val1/val2;


    printf("\n SUM: %d" , resultadd);
    printf("\n DIF: %d" , resultsub);
    printf("\n PROD: %d" , resultmul);
    printf("\n QUO: %d" , resultdiv);
    ///////////////////////////////////////changes
    ///////////////////////////////////////changes
    ///////////////////////////////////////changes
    printf("\n");

    return 0;
}