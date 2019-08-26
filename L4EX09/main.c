#include <stdio.h>
#include <stdlib.h>
int main()
{
    int questao1, questao2, questao3, soma;

    printf("\nQUIZ DO ESPORTE\n");

    printf("\n1 - Quantas vezes o Sao Paulo foi campeao mundial?\n ");
    printf("\n1:  0");
    printf("\n2:  4");
    printf("\n3:  3");
    printf("\n4:  2");
    printf("\n\nQual a resposta: ");
    scanf("%d", &questao1);

    switch(questao1){
        case 1:
            printf("\nResposta incorreta\n");
            break;
        case 2:
            printf("\nResposta incorreta\n");
            break;
        case 3:
            printf("\nAcertou!!!\n");
            break;
        case 4:
            printf("\nResposta incorreta\n");
            break;
        default:
            printf("\nOpacao invalida");
            break;
    }

    printf("\n2 - Para qual time o jogador Cristiano Ronaldo foi vendido em 2018?\n ");
    printf("\n1: Barcelona");
    printf("\n2: Chelsse");
    printf("\n3: Juventos");
    printf("\n4: PSG");
    printf("\n\nQual a resposta: \n");
    scanf("%d", &questao2);

    switch(questao2){
        case 1:
            printf("\nResposta incorreta\n");
            break;
        case 2:
            printf("\nResposta incorreta\n");
            break;
        case 3:
            printf("\nAcertou!!!\n");
            break;
        case 4:
            printf("\nResposta incorreta\n");
            break;
        default:
            printf("\nOpacao invalida\n");
            break;
    }

    printf("\n\n3 - Qual time de futebol venceu o Brasil por 7 X 1\n ");
    printf("\n1: Alemanha");
    printf("\n2: Holanda");
    printf("\n3: Japão");
    printf("\n4: inglaterra");
    printf("\n\nQual a resposta: \n");
    scanf("%d", &questao3);

    switch(questao3){
        case 1:
            printf("\nAcertou!!!\n");
            break;
        case 2:
            printf("\nResposta incorreta\n");
            break;
        case 3:
            printf("\nResposta incorreta\n");
            break;
        case 4:
            printf("\nResposta incorreta\n");
            break;
        default:
            printf("\nOpacao invalida\n");
            break;
    }
     printf("\nFim de jogo\n");

     if(questao1 == 3 && questao2 == 3 && questao3 == 1){
        printf("\n\nVOCE ACERTOU 3 QUESTOES\n\n");
        printf("\n\n********** PARABENS **********\n");
     } else if((questao1 != 3 && questao2 == 3 && questao3 == 1) ||
               (questao1 == 3 && questao2 != 3 && questao3 == 1) ||
               (questao1 == 3 && questao2 == 3 && questao3 != 1)){
        printf("\n\nVOCE ACERTOU DUAS QUESTOES\n");
     } else {
        printf("\n\nVOCE NAO ACERTOU NENHUMA QUESTAO\n");
     }
    return 0;
}
