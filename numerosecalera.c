#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){//Inicio del main

    int n=1, i, j, k;
    int *V;
    V =(int*)malloc(n*sizeof(int));

    printf("\n--> Cantidad valores enteros a imprimir: ");
    scanf("%d", &k);

    if(V==NULL){//Inicio del if
        puts("No se puedo crear el vector");
    }//Cierre del if

    if(k<100000001 && k>0 ){//Inicio del if
    for(i=0; i<k; i++){//Inicio del for
        V[i]=i+1;
        for(j=0; j<i+1; j++){//Inicio for(2)
            printf("%d ", V[j]);
        }//Cierre for(2)
        puts("");
        if( i==(k/2) ){//Inicio de if
            V = (int*)realloc(V,n*2*sizeof(int));//Redimenciona el vector
        }//Cierre de if
    }//Cierre del for
    
    }//Cierre del if

return 0;
}//Cierre del main
