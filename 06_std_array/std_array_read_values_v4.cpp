#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> myA = {10,20,30};
    array<int,5> mya[5];
    int dim1 = myA.size();//retorna o tamanho do array myA
    int dim2 = mya->size();//retorna o tamanho do array apontado por mya
    cout << "introduza 5 valores" << endl;
    for(size_t i=0;i<5;i++){
      cin >> myA[i];
    }
}