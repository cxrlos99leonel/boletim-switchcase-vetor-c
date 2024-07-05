#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

int main ()
{
    int opcao, i, av=1, somaC, somaP, somaK, somaR;
    unsigned int Carlos[5]={0,0,0,0,0};
    unsigned int Paulo[5]={0,0,0,0,0};
    unsigned int Kleber[5]={0,0,0,0,0};
    unsigned int Rosangela[5]={0,0,0,0,0};
    float media;

    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    printf("Boletim dos alunos...\n\n");

    printf("Escolha um aluno para conferir o boletim: \n");
    printf("[1] Carlos\n");
    printf("[2] Paulo\n");
    printf("[3] Kleber\n");
    printf("[4] Rosangela\n");
    printf("[5] Sair\n\n");

    printf("Digite o n�mero da op��o desejada: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1: printf("\nBoletim de Carlos:\n");
                somaC = Carlos[0];
                for(i=0; i<5; i++)
                {
                    Carlos[i]= rand() % 11;
                    printf("A nota de Carlos na avalia��o de n�mero %d � %d\n", av, Carlos[i]);
                    Sleep(1500);
                    av++;
                    somaC = somaC + Carlos[i];
                }
                if(somaC >= 30)
                {
                    printf("\nA soma das notas de Carlos � de %d, portanto, o aluno foi aprovado!\n", somaC);
                }
                if(somaC >= 20 && somaC < 30)
                {
                    printf("\nA soma das notas de Carlos � de %d, portanto, o aluno est� de recupera��o!\n", somaC);
                }
                if(somaC < 20)
                {
                    printf("\nA soma das notas de Carlos � de %d, portanto, o aluno foi reprovado!\n", somaC);
                }
                media= (float) somaC/5;
                printf("A m�dia das notas de Carlos � de %2.1f\n", media);
                Sleep(10000);
                exit(1);

        case 2: printf("\nBoletim de Paulo:\n");
                somaP = Paulo[0];
                for(i=0; i<5; i++)
                {
                    Paulo[i]= rand() % 11;
                    printf("A nota de Paulo na avalia��o de n�mero %d � %d\n", av, Paulo[i]);
                    Sleep(1500);
                    av++;
                    somaP = somaP + Paulo[i];
                }
                if(somaP >= 30)
                {
                    printf("\nA soma das notas de Paulo � de %d, portanto, o aluno foi aprovado!\n", somaP);
                }
                if(somaP >= 20 && somaP < 30)
                {
                    printf("\nA soma das notas de Paulo � de %d, portanto, o aluno est� de recupera��o!\n", somaP);
                }
                if(somaP < 20)
                {
                    printf("\nA soma das notas de Paulo � de %d, portanto, o aluno foi reprovado!\n", somaP);
                }
                media= (float) somaP/5;
                printf("A m�dia das notas de Paulo � de %2.1f\n", media);
                Sleep(10000);
                exit(1);

        case 3: printf("\nBoletim de Kleber:\n");
                somaK = Kleber[0];
                for(i=0; i<5; i++)
                {
                    Kleber[i]= rand() % 11;
                    printf("A nota de Kleber na avalia��o de n�mero %d � %d\n", av, Kleber[i]);
                    Sleep(1500);
                    av++;
                    somaK = somaK + Kleber[i];
                }
                if(somaK >= 30)
                {
                    printf("\nA soma das notas de Kleber � de %d, portanto, o aluno foi aprovado!\n", somaK);
                }
                if(somaK >= 20 && somaK < 30)
                {
                    printf("\nA soma das notas de Kleber � de %d, portanto, o aluno est� de recupera��o!\n", somaK);
                }
                if(somaK < 20)
                {
                    printf("\nA soma das notas de Kleber � de %d, portanto, o aluno foi reprovado!\n", somaK);
                }
                media= (float) somaK/5;
                printf("A m�dia das notas de Kleber � de %2.1f\n", media);
                Sleep(10000);
                exit(1);

        case 4: printf("\nBoletim de Rosangela:\n");
                somaR = Rosangela[0];
                for(i=0; i<5; i++)
                {
                    Rosangela[i]= rand() % 11;
                    printf("A nota de Rosangela na avalia��o de n�mero %d � %d\n", av, Rosangela[i]);
                    Sleep(1500);
                    av++;
                    somaR = somaR + Rosangela[i];
                }
                if(somaR >= 30)
                {
                    printf("\nA soma das notas de Rosangela � de %d, portanto, a aluna foi aprovada!\n", somaR);
                }
                if(somaR >= 20 && somaR < 30)
                {
                    printf("\nA soma das notas de Rosangela � de %d, portanto, a aluna est� de recupera��o!\n", somaR);
                }
                if(somaR < 20)
                {
                    printf("\nA soma das notas de Rosangela � de %d, portanto, a aluna foi reprovada!\n", somaR);
                }
                media= (float) somaR/5;
                printf("A m�dia das notas de Rosangela � de %2.1f\n", media);
                Sleep(10000);
                exit(1);

        case 5: printf("\nSaindo...\n");
                Sleep(5000);
                exit(1);
    }
}
