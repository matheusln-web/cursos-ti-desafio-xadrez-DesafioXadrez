#include <stdio.h>
// começando a deixar o codigo em ingles
void bishop(){// Função para mostrar o movimento do bispo
    printf("Movimentação do Bispo:\n");
    for(int right = 5, up = 5; right > 0 && up > 0; right--, up--){
        printf("Direita, Cima\n");
    }
}
void tower(){// Função para movimento da torre
    printf("Movimento da Torre:\n");
    for(int right = 5; right > 0; --right) {
        printf("Direita\n");
    }
}
void queen(){// função para movimento da Rainha
    printf("Movimento da Rainha:\n");
    for (int left = 8; left > 0; --left){
        printf("Esquerda\n");
    }  
}
void horse(){// Função para movimento do cavalo
    printf("Movimento do Cavalo\n");
    for(int right = 1; right > 0; --right){//Estrutura aninhada que que vai uma vez pra direita e 2 pra cima
        printf("Direita\n");
        int up = 2;
        while(up > 0){
            printf("Cima\n");
            up--;
        }
    }
}
int main(){

    bishop();
    tower();
    queen();
    horse();

    return 0;
}
