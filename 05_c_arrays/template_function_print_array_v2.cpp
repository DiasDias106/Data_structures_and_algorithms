#include <iostream>
using namespace std;
 template < typename T , size_t N>
 void listar( T (&arr) [N]){
    for(auto El : arr){
        cout << El << endl;
    }
 }
 int main(){
    int num[10];
    int dim = 10;
    cout << "introduza 10 numeros" << endl;
    for(size_t i=0;i<dim;i++){
        cin >> num[i];
    }
    listar(num);
 }