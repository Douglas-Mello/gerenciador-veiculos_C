#include <stdio.h>
#include <stdlib.h>
struct Veiculo{
    int id;
    float km;
    int capacidade;};

void preencheCapacidade(struct Veiculo vetor[], int length){
    for(int i=0; i<length; i++){
        printf("Digite o id do veiculo [%d]: ", i+1);
        scanf("%d", &vetor[i].id);
        printf("Digite a capacidade: ");
        scanf("%d", &vetor[i].capacidade);
        }
    }
void copiaGrandesCapacidades(struct Veiculo vetor[], int length, int vetorGrandes[]){
    int qnt=0;
    int j=0;
    int id[length];
    for(int i=0; i < length ; i++){
        if(vetor[i].capacidade > 30){
            vetorGrandes[i] = vetor[i].capacidade;
            id[j] = vetor[i].id;
            j++;
            qnt ++;
        }
    }
    for(int i=0; i<qnt; i++){
        printf("O veiculo de id %d possui a capacidade de %d\n",id[i], vetorGrandes[i]);
    }
}

int main()
{
    struct Veiculo veiculo[10];
    int res[10];
    preencheCapacidade(veiculo, 10);
    copiaGrandesCapacidades(veiculo, 10, res);

}
