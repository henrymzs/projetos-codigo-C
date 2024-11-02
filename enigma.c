#include <stdio.h>
// necessario esta biblioteca para a utilização do srtlen(calcular comprimento de uma string)
#include <string.h>

int main()
{
    // Mensagem e crib como entrada
    char mensagem[10001];
    char crib[10001];
    int posicoesValidas = 0; // sera usada para contar posições validas, começa com 0 pois ainda não existe posição valida

    // Lê a mensagem e o crib
    printf("Digite a mensagem: ");
    scanf("%s", mensagem);
    printf("Digite o crib: ");
    scanf("%s", crib);

    // Calcula o comprimento da mensagem e do crib após a entrada
    int tamanhoMensagem = strlen(mensagem); // srtlen para saber o numero de caracteres e armazenar na variavel
    int tamanhoCrib = strlen(crib);

    // Verifica cada posição possível onde o crib poderia estar na mensagem
    for (int i = 0; i <= tamanhoMensagem - tamanhoCrib; i++) {
        int valido = 1; // Assume que a posição é válida até encontrar uma coincidência

        // Verifica se o crib se encaixa na posição atual `i`
        for (int j = 0; j < tamanhoCrib; j++) {
            if (mensagem[i + j] == crib[j]) { // comparando letra do crib com a letra da mensagem correspondente
                valido = 0; // Se houver uma coincidência de letras, a posição é inválida
                break;
            }
        }

        // Se a posição é válida, incrementa o contador de posições válidas
        if (valido) {
            posicoesValidas++;
        }
    }

    // Exibe o número total de posições válidas
    printf("Posições Válidas: %d\n", posicoesValidas);

    return 0;
}
