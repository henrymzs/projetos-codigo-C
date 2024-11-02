#include <stdio.h>

int main() {
    // campo possui N boosters. N = 5 boosters e lista de poderes = [4, 2, 4, 2, 3]
    // precisa dar um pulo certeiro para sair do campo com apenas um salto
    // se i + poderes[i] >= N então sai do campo

    int boosters = 5; // N boosters, ou seja, a quantidade de boosters
    int poderes[boosters]; // array poderes de tamanho N (boosters)
    int saltoMinimo = 0; // variável para armazenar o menor salto inicial para sair do campo
    int encontrado = 0; // variável booleana que indica se um salto foi encontrado, 0 é interpretado como falso

    // Colocar os poderes dos boosters no array 'poderes'
    printf("Digite os poderes dos boosters separados por espaço: ");
    for (int i = 0; i < boosters; i++) { // cada iteração armazena o valor na posição do array 'poderes'
        scanf("%d", &poderes[i]);
    }

    // Encontrar o menor salto inicial necessário para sair do campo
    for (int i = 0; i < boosters; i++) {
        int posicaoFinal = i + poderes[i]; // calcula a posição final para um salto inicial a partir de 'i'

        if (posicaoFinal >= boosters) { // Se a posição final ultrapassa o campo
            saltoMinimo = i + 1; // Atualiza para o menor salto inicial (em um formato 1-indexado)
            encontrado = 1; // 1 significa que encontramos um salto válido
            break; 
        }
    }

    if (encontrado) { // Encontrado = 1, significa que foi encontrado o caso, se não for cai no else
        printf("O menor salto inicial necessário é: %d\n", saltoMinimo);
    } else {
        printf("Não é possível sair do campo com os boosters fornecidos.\n");
    }

    return 0;
}
