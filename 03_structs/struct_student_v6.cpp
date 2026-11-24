#include<iostream>
#include<string>
using namespace std;
struct alunos{
 string nome;
 int numero;
 int nota;
};
int main(){
alunos aluno[3];
for(int i=0;i<3;i++){
    cout << "introduza nome" << endl;
    cin >> aluno[i].nome;
    cout << "introduza numero" << endl;
    cin >> aluno[i].numero;
    cout << "introduza nota" << endl;
    cin >> aluno[i].nota;
}
for(int i=0;i<3;i++){
    cout << "nome\t" << aluno[i].nome << endl;
    cout << "numero:\t" << aluno[i].numero << endl;
    cout << "nota:\t" << aluno[i].nota << endl;
}
}
