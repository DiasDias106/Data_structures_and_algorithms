/*1. Listar vetor
Escreva a função listInt() que recebe um vector de inteiros e lista os seus elementos
separados por um espaço
Escreva a função listString() que recebe um vetor de strings e lista uma em cada linha
Faça a função main() que as permite testar*/
#include<iostream>
#include<vector>
using namespace std;
void listInt(const vector<int>&v);
int main(){
    vector<int>myV1(10);
    for(size_t i=0;i<10;i++){
        cout << "introduza numero" <<endl;
        cin >> myV1[i];
    }
    listInt(myV1);
}
void listInt(const vector<int>&v){
    int i =0;
    for(int i=0;i<10;i++){
        cout << v[i] << endl;
    }
}