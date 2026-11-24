#include<iostream>
using namespace std;
int somaum(int n);
void somaout(int &n);
void somafin(int *num);
int main(){
    int num1;
    int ret;
    cout << "introduza um valor para a variavel num1"<<endl;
    cin >> num1;
    ret = somaum(num1);
    cout << ret << endl;
    somaout(num1);
    cout << num1 << endl;
    somafin(&num1);
    cout << num1 << endl;
}
//passagem por valor
int somaum(int n){
    n = n+1; // E criada uma copia do valor num1 e e armazenada na variavel n , para que a alteração do valor aconteça e necessario que retornemos o valor
    return n; // retornamos uma copia do valor para uma variavel no programa principal
}
//passagem por referencia de valor
void somaout(int &n){ //podera ser void ou int caso pretendamos retornar , mas como n e por valor n é necessario
    n = n+1; // e copiada o valor da variavel e é armazenada num enderesso de memoria onde vai ser manipluada atravez da função
}
//passagem por referencia atravez de ponteiro
void somafin(int *num){ // e passada a um pointer o enderresoo de uma funçao variavel para que possa ser manipulada na função
    *num = *num + 1; 
}