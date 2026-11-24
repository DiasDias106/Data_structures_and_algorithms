#include<iostream>
#include<string>
using namespace std;
struct elo{
  int numero;
  string nome;
  char casa[10];
};
int main(){
    elo elemento[3];
    for(size_t i=0;i<3;i++){
        cout << "introduza o seu numero" << endl;
        cin >> elemento[i].numero;
        cout << "introduza o seu nome" << endl;
        cin >> elemento[i].nome;
        cout << "introduza a sua casa" << endl;
        cin >> elemento[i].casa;
    }
    for(size_t i=0;i<3;i++){
        cout << "numero: \t" << elemento[i].numero << endl;
        cout << "Nome: \t" << elemento[i].nome  << endl;
        cout << "Casa: \t" << elemento[i].casa << endl;
    }
}