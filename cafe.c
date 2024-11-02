#include <stdio.h>

// minizar tempo dos funcionarios ao buscar um café
// encontrar o tempo minimo entre as opções possiveis
// entrada: três numero inteiros A³(cada numero representa a quantidade de funcionario no 1,2,3 andar)
// cada funcionario leva 1 minuto para subir ou descer um andar
/*Passo
1: calcular o tempo para da opção de maquina
2: colocar no segundo andar
3: colocar no terceiro andar*/
int main()
{
    int primeiroAndar, segundoAndar, terceiroAndar;
    // tempo 1 - primeiro andar, tempo 2 - segundo andar, tempo 3, terceiro andar
    int tempo1, tempo2, tempo3;
    int tempoMinimo;

    // leitura dos numeros de funcionarios de cada andar
    printf("Digite o número de funcionários no primeiro andar: ");
    scanf("%d",&primeiroAndar);
    printf("Digite o número de funcionários no segundo andar: ");
    scanf("%d",&segundoAndar);
    printf("Digite o número de funcionários no terceiro andar: ");
    scanf("%d",&terceiroAndar);
   
    // calculo do tempo total para cada posicao da maquina
    tempo1 = (2 * segundoAndar) + (4 * terceiroAndar); // funcionarios do primeiro andar nao irao se locomover
    tempo2 = (2 * primeiroAndar) + (2 * terceiroAndar); // funcionarios do segundo andar nao irao se locomover
    tempo3 = (4 * primeiroAndar) + (2 * segundoAndar); // funcionarios do terceiro andar nao irao se locomver

    // encontrando tempo minimo entre as opções
    /* foram utilizado 2 if porque é necessario que cada tempo seja comparado individualmente com 'tempoMinimo' se usarmos else if o programa deixara de verificar tempo3 quando tempo2 form menor que tempo1*/
    
    tempoMinimo = tempo1;
    if (tempo2 < tempoMinimo) {
        tempoMinimo = tempo2;
    } // com else if esse condição so seria executado se o primeiro for falso, não efetuando as demais verificações, sendo incompleto
    if (tempo3 < tempoMinimo) {
        tempoMinimo = tempo3;
    }
    
    printf("O tempo minimo total é: %d minutos\n",tempoMinimo);
    

    return 0;
}
