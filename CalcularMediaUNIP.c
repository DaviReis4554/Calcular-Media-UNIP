//PROGRAMA PARA CALCULAR MÉDIA DE NOTAS DA UNIP

#include <stdio.h>

int main(){
    float np1, np2, pim, exame, final;
    
    printf("============================\n");
    printf("|     Sua nota da NP1?     |\n");
    printf("============================\n");
    scanf("%f", &np1);
    
    printf("============================\n");
    printf("|     Sua nota da NP2?     |\n");
    printf("============================\n");
    scanf("%f", &np2);
    
    printf("============================\n");
    printf("|     Sua nota da PIM?     |\n");
    printf("============================\n");
    scanf("%f", &pim);
    
    final = (((np1*4)+(np2*4)+(pim*2))/10);
    printf("===========================\n");
    printf("| Sua nota final é: %.2f  \n", final);
    printf("|-------------------------| \n");
    
    if(final >= 7){
        printf("|   Você passou direto!   |\n");
        printf("===========================\n");
    }
    else if(final < 7){
        printf("|   Você foi para Exame!  |\n");
        printf("===========================\n");
        printf("|   Sua nota do Exame?    |\n");
        printf("============================\n");
        scanf("%f", &exame);
        
        if (exame >= 5){
            printf("===========================\n");
            printf("|  Você passou no Exame!  |\n");
            printf("===========================\n");
            
            return 0;
        }
        else if (exame < 5){
            printf("===========================\n");
            printf("|      Você pegou DP!     |\n");
            printf("===========================\n");
            
            return 0;
        }
    }
}