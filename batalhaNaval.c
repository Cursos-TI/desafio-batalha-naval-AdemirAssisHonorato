#include <stdio.h>

/*

Nome: Ademir de Assis Honorato Gonçalves Junior  Curso: Engenharia de Software  Atividade: Desafio Batalha Naval Nivel Novato

O que você vai fazer

Represente o Tabuleiro: Utilize uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.
 
Posicione os Navios: Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). Um navio será posicionado horizontalmente e o outro verticalmente. Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham. 
Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.
 
Exiba o Tabuleiro: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios. A saída deve ser clara e organizada, permitindo visualizar facilmente a posição dos navios. 
Dica: Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.

"Fiz exatamente oque o professor fez na explicação da atividade"

*/
int main(){

  int j = 0, tabuleiro[10][10] = {
            {0,0,0,0,0,0,0,0,0,1},
            {0,0,0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,0,0,3},
            {0,0,0,3,3,3,0,0,0,4},
            {0,0,0,0,0,0,0,0,0,5},
            {0,0,0,0,0,0,0,3,0,6},
            {0,0,0,0,0,0,0,3,0,7},
            {0,0,0,0,0,0,0,3,0,8},
            {0,0,0,0,0,0,0,0,0,9},
            {0,0,0,0,0,0,0,0,0,10}
            };

  char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
  int i = 1;

  printf("  ");
  while (j < 10)
  {
      printf(" %c", coluna[j]);
      j++;
  }

  for(int i = 1; i < 11; i++)
  {

  printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);  

    while (i == 2)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[1][3], tabuleiro[1][4], tabuleiro[1][5], tabuleiro[1][6], tabuleiro[1][7], tabuleiro[1][8], tabuleiro[1][9]);
    i++;

    }
    
    while (i == 3)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5], tabuleiro[2][6], tabuleiro[2][7], tabuleiro[2][8], tabuleiro[2][9]);
    i++;

    }

    while (i == 4)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[3][0], tabuleiro[3][1], tabuleiro[3][2], tabuleiro[3][3], tabuleiro[3][4], tabuleiro[3][5], tabuleiro[3][6], tabuleiro[3][7], tabuleiro[3][8], tabuleiro[3][9]);
    i++;

    }

    while (i == 5)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[4][0], tabuleiro[4][1], tabuleiro[4][2], tabuleiro[4][3], tabuleiro[4][4], tabuleiro[4][5], tabuleiro[4][6], tabuleiro[4][7], tabuleiro[4][8], tabuleiro[4][9]);
    i++;

    }

    while (i == 6)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[5][0], tabuleiro[5][1], tabuleiro[5][2], tabuleiro[5][3], tabuleiro[5][4], tabuleiro[5][5], tabuleiro[5][6], tabuleiro[5][7], tabuleiro[5][8], tabuleiro[5][9]);
    i++;

    }

    while (i == 7)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[6][0], tabuleiro[6][1], tabuleiro[6][2], tabuleiro[6][3], tabuleiro[6][4], tabuleiro[6][5], tabuleiro[6][6], tabuleiro[6][7], tabuleiro[6][8], tabuleiro[6][9]);
    i++;

    }

    while (i == 8)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[7][0], tabuleiro[7][1], tabuleiro[7][2], tabuleiro[7][3], tabuleiro[7][4], tabuleiro[7][5], tabuleiro[7][6], tabuleiro[7][7], tabuleiro[7][8], tabuleiro[7][9]);
    i++;

    }

    while (i == 9)
    {

    printf("\n % d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[8][0], tabuleiro[8][1], tabuleiro[8][2], tabuleiro[8][3], tabuleiro[8][4], tabuleiro[8][5], tabuleiro[8][6], tabuleiro[8][7], tabuleiro[8][8], tabuleiro[8][9]);
    i++;

    }

    while (i == 10)
    {

    printf("\n %d %d %d %d %d %d %d %d %d %d %d", i, tabuleiro[9][0], tabuleiro[9][1], tabuleiro[9][2], tabuleiro[9][3], tabuleiro[9][4], tabuleiro[9][5], tabuleiro[9][6], tabuleiro[9][7], tabuleiro[9][8], tabuleiro[9][9]);
    break;

    }
  }

  return 0;
}