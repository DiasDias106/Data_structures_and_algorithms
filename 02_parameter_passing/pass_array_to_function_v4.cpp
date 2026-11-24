#include<iostream>
using namespace std;
int main(){
    int num[5];
    int dim = sizeof(num)/sizeof(num[0]);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> num[i];
    }
    somaum(num,dim);
}
//passagem por valor
void somaum(int num[],int dim){
    for(int i=0;i<dim; i++){
      num[i] += 1;
    }
}
//passagem por pointer
void somaoutro(int *pnum, int dim){
    for(int i=0;i<dim;i++){
        pnum[i] += 1; //neste formato o pointer aponta para a primeira posição do array , assim sendo n precisa da estrela, neste caso cada posiçao recebera a adição de 1 unidade
    }
}
//passagem por referencia
void som(int (&arr)[],int dim){
    for(int i=0;i<dim ; i++){
        arr[i] += 1; //e passada por referencia uma localização de um array para um outro array da mesma dimenção, sendo assim os valores seram alterados na variaveel original
    }
}