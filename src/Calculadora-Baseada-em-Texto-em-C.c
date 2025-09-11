#include <stdio.h>

int main() {

    int Escolha;
    double Primeiro, Segundo;
    char Operar;

    while (1) {

        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");        
        if (scanf("%d", &Escolha) != 1) {
            printf("\n");
            printf("Entrada invalida! Por favor, digite a opcao novamente.");
            while (getchar() != '\n');
            continue;
        }
        printf("\n");

        if (Escolha == 1) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &Primeiro);
            printf("Digite o segundo numero: ");
            scanf("%lf", &Segundo); ("\n");
            printf("Resultado: %lf + %lf = %lf", Primeiro, Segundo, Primeiro + Segundo);
            printf("\n");
        } else if (Escolha == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &Primeiro);
            printf("Digite o segundo numero: ");
            scanf("%lf", &Segundo);
            printf("Resultado: %lf - %lf = %lf", Primeiro, Segundo, Primeiro - Segundo);
            printf("\n");
        } else if (Escolha == 3) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &Primeiro);
            printf("Digite o segundo numero: ");
            scanf("%lf", &Segundo);
            printf("Resultado: %lf x %lf = %lf", Primeiro, Segundo, Primeiro * Segundo);
            printf("\n");
        } else if (Escolha == 4) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &Primeiro);
            printf("Digite o segundo numero: ");
            scanf("%lf", &Segundo);
            if (Segundo != 0) {
                printf("Resultado: %lf / %lf = %lf", Primeiro, Segundo, Primeiro / Segundo);
                printf ("\n");
            } else {
                printf("Erro: Divisao por zero nao é permitida.");
                printf("\n");
            }
        } else if (Escolha == 5) {
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            return 0;
        } else {
            printf("Entrada invalida! Por favor, digite a opcao novamente.");
            continue;
        }
        
        do {
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &Operar);
            if (Operar == 's' || Operar == 'S') {
                break;
            } else if (Operar == 'n' || Operar == 'N') {
                printf("Obrigado por usar a calculadora! Ate a proxima.");
                return 0;
            } else {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.");
                printf("\n");
            }
        } while (1); 
    }
}
