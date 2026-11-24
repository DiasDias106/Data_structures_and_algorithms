#include<iostream>
#include<string>
using namespace std;
int main(){
  string nomes[10];
  size_t dim1 = sizeof(nomes)/sizeof(nomes[0]);
  int notas [10];
  float media;
  for(size_t i=0;i<dim1;i++){
    cout << "introduza o seu nome"<< endl;
    cin >> nomes[i];
    cout << "introduza a sua nota" << endl;
    cin >> notas[i];
    media += notas[i];
  }
  media = media/dim1;
  for(size_t i=0;i<dim1;i++){
    cout << "nome"<< nomes[i] << endl;
    cout << "notas" << notas[i] << endl;
  }
  cout << "media da turma" << media;
}