#include<iostream>
using namespace std;
size_t pesquisar(int num[],size_t dime,int numero);
size_t pesquisaBinaria(int arr[], size_t dim, int numero);

int main(){
    int num[10];
    int numero;
    cout << "introduza o numero que quer pesquisar" << endl;
    cin >> numero;
    int dim = sizeof(num)/sizeof(num[0]);
    cout << "introduza os valores no array" << endl;
    for(size_t i=0;i<10;i++){
        cin >> num[i];
    }
    size_t retorno1 = pesquisar(num,dim,numero);
    if(retorno1 != -1){
        cout << "o valor foi encontrado na posição" << retorno1 << endl;
    }else{
        cout << "o valor nao foi encontrado" << endl;
    }

    for(size_t i=0;i<dim-1;i++){
        for(size_t j=0;j<(dim-1-i);j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }

}

 size_t pesquisar(int num[],size_t dime,int numero){
    cout << "realizacao da pesquisa" << endl;
    for(size_t i=0;i<dime;i++){
       if(num[i] == numero){
        cout << "numero encontrado no indice" << i << endl;
        return i;
       }else{
        cout << "numero nao foi encontrado" << endl;
        return -1;
       }
    }
}

size_t pesquisaBinaria(int arr[], size_t dim, int numero) {
    size_t esq = 0;
    size_t dir = dim - 1;
    while (esq <= dir) {
        size_t meio = esq + (dir - esq) / 2;
        if (arr[meio] == numero) {
            return meio; // Retorna o índice se o elemento for encontrado
        } else if (arr[meio] < numero) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}