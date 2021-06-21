#include <stdio.h>

///@param ALTURA altura do triangulo
void formartriangulo(int ALTURA){
    int i,espacos,asteristicos;
    for(i=0;i<=ALTURA;i++){ //repeticao ate a altura escolhida
        if(i==1)
            i++;
        for(espacos=ALTURA;espacos>=i;espacos--){//espacos para dar e formar o triangulo
            printf(" ");
        }
        for(asteristicos=0;asteristicos<=i;asteristicos++){//desenho do triangulo
            printf("* ");
        }
        printf("\n");
    }
}

int main(void) {
    int n,op=0;
    while(op!=2){
    printf("Digite a altura para o triangulo: ");
    scanf("%d", &n);
    printf("\nTRIANGULO FORMADO:\n\n");
    formartriangulo(n);//funcao que forma triangulo
    printf("\n(1)Continuar\n(2)Sair\nDigite sua opcao: ");//opcoes
    scanf("%d",&op);
    }
    printf("\nFinalizando...");

    return 0;
}