#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

int charada;
int resposta;
int tentativas = 1;
time_t t;

srand((unsigned) time(&t));
resposta = 1 + ( rand() % 50);

while ( tentativas <= 10) {

    while ( 1 ) {

        printf("Digite um valor entre 0 e 50: ");
        scanf ("%d", &charada);

        if ( charada >= 0 && charada <= 100 )
            break;
    }

if ( charada == resposta ){
    printf("caraca! você acertou em %d tentativas!\n", tentativas);
    return ( 0 );
} else if (charada < resposta )
    printf("Meu número é maior!\n");
else
    printf("Meu número é menor!\n");

if( charada > 50){
            printf("Você não sabe ler? Eu falei entre 0 e 50! >:(\n");
        }


tentativas = tentativas + 1;

}

printf("Você gastou todas suas tentativas! :(\n");

return (0);
}