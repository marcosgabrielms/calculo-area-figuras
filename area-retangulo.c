#include <stdio.h>
#include <math.h>

int main(){
    int escolha;
    float base, altura, area, raio;

    while (1){
        printf("Escolha qual figura voce deseja calcular a area:\n");
        printf("1. Retangulo\n");
        printf("2. Circulo\n");
        printf("3. Triangulo\n");
        printf("4. Losango\n");
        printf("5. Sair\n");
        scanf("%d", &escolha);

        if (escolha == 5) {
            printf("Saindo do programa, vlw flw\n");
            break;
        }

        switch (escolha){
            case 1:
                printf("Digite a base do retangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                area = base * altura;
                printf("O valor da area e: %.1f\n", area);
                break;

            case 2:
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                area = M_PI * pow(raio, 2);
                printf("A area do circulo e: %.1f\n", area);
                break;

            case 3:
                printf("Digite a base do triangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triangulo: ");
                scanf("%f", &altura);
                area = (base * altura) / 2;
                printf("A area do triangulo e: %.1f\n", area);
                break;

            
        }
    }

    return 0;
}