#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados dos países
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

int main() {
    // --- CADASTRO DAS CARTAS (Desafio Anterior) ---
    // Carta 1: Brasil
    Carta carta1;
    strcpy(carta1.nome, "Brasil");
    carta1.populacao = 214300000;
    carta1.area = 8515767.0;
    carta1.pib = 1.61; // Em trilhões de USD
    carta1.pontos_turisticos = 45;
    carta1.densidade_demografica = (float)carta1.populacao / carta1.area; // ~25.16

    // Carta 2: Japao
    Carta carta2;
    strcpy(carta2.nome, "Japao");
    carta2.populacao = 125700000;
    carta2.area = 377975.0;
    carta2.pib = 4.94; // Em trilhões de USD
    carta2.pontos_turisticos = 82;
    carta2.densidade_demografica = (float)carta2.populacao / carta2.area; // ~332.56

    // Variáveis para o menu e controle
    int opcao;
    
    // --- MENU INTERATIVO ---
    printf("=========================================\n");
    printf("         SUPER TRUNFO - PAÍSES           \n");
    printf("=========================================\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("=========================================\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    // --- LÓGICA DE COMPARAÇÃO (Switch e If-Else Aninhados) ---
    switch(opcao) {
        case 1: // População (Maior vence)
            printf("Atributo Escolhido: Populacao\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s Venceu!\n", carta1.nome);
            } else {
                if (carta2.populacao > carta1.populacao) {
                    printf("Resultado: %s Venceu!\n", carta2.nome);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2: // Área (Maior vence)
            printf("Atributo Escolhido: Area\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            
            if (carta1.area > carta2.area) {
                printf("Resultado: %s Venceu!\n", carta1.nome);
            } else {
                if (carta2.area > carta1.area) {
                    printf("Resultado: %s Venceu!\n", carta2.nome);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3: // PIB (Maior vence)
            printf("Atributo Escolhido: PIB\n");
            printf("%s: $%.2f trilhoes\n", carta1.nome, carta1.pib);
            printf("%s: $%.2f trilhoes\n", carta2.nome, carta2.pib);
            
            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s Venceu!\n", carta1.nome);
            } else {
                if (carta2.pib > carta1.pib) {
                    printf("Resultado: %s Venceu!\n", carta2.nome);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4: // Pontos Turísticos (Maior vence)
            printf("Atributo Escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos cadastrados\n", carta1.nome, carta1.pontos_turisticos);
            printf("%s: %d pontos cadastrados\n", carta2.nome, carta2.pontos_turisticos);
            
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Resultado: %s Venceu!\n", carta1.nome);
            } else {
                if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                    printf("Resultado: %s Venceu!\n", carta2.nome);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5: // Densidade Demográfica (MENOR vence - Regra Invertida)
            printf("Atributo Escolhido: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade_demografica);
            
            // Lógica invertida: menor valor ganha
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("Resultado: %s Venceu! (Menor densidade demografica)\n", carta1.nome);
            } else {
                if (carta2.densidade_demografica < carta1.densidade_demografica) {
                    printf("Resultado: %s Venceu! (Menor densidade demografica)\n", carta2.nome);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default: // Segurança: Trata opções inválidas no menu
            printf("Erro: Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    printf("=========================================\n");
    return 0;
}