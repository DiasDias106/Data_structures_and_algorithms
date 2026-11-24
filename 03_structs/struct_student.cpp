#include<iostream>
#include<string>
using namespace std;
struct alunos
{
  int notas[3];
  int numero;
  string nome;
};

int main(){
alunos aluno[3];
for(int i=0;i<3;i++){
    cout << "introduza o seu nome:" << endl;
    cin >> aluno[i].nome;
    cout << "introduza o seu numero" << endl;
    cin >> aluno[i].numero;
    cout << "introduza as suas notas"<<endl;
    cin >> aluno[i].notas[1];
    cin >> aluno[i].notas[2];
    cin >> aluno[i].notas[3];
}
}