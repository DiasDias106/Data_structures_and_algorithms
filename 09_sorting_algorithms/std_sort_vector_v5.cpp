/*4. Ordenação Crescente:
Escreva um programa em C++ que pergunte ao utilizador qual deve ser a dimensão do vetor
(não se preocupe com as validações).
Preencha o vetor de inteiros com dados fornecidos pelo utilizador.
Ordene os elementos por ordem crescente
Mostre o vetor resultante.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
 int main(){
   int dim;
   cout << "introduza a dimencao do vetor" << endl;
   cin >> dim;
   vector<int> myV(dim);
   for(size_t i=0;i<dim;i++){
       cout << "introduza numeros" << endl;
       cin >> myV[i];
   }
   sort(myV.begin(),myV.end());
   for(auto El : myV){
    cout << El << endl;
   }
}