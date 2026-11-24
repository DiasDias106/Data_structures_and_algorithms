/*3. Soma de Vetores:
Escreva um programa em C++ que crie dois vetores vazios de 5 elementos inteiros cada.
Preencha esses vetores com números fornecidos pelo utilizador.
Crie um terceiro vetor que armazene a soma dos elementos correspondentes dos dois primeiros
vetores.
Mostre esse novo vetor.*/
#include<iostream> 
#include<vector>
using namespace std;
int main(){
vector<int> myV1(5);
vector<int> myV2(5);
vector<int> myV3(5);
cout << "introduza 10 numeros" << endl;
for(size_t i=0;i<5;i++){
   cin >> myV1[i];
   cin >> myV2[i];
   myV3[i] = myV1[i] + myV2[i];
}
for(auto El: myV3){
    cout << El << endl;
}
}