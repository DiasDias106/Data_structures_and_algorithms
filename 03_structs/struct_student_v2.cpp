#include<iostream>
#include<string>
using namespace std;
struct aluno{
    string nome;
    int idade;
    int nota;
};

int main(){
    aluno alunos[3];
    for(int i=0;i<3;i++){
        cout << "introduza o seu nome" << endl;
        cin >> alunos[i].nome;
        cout << "introduza a sua idade" << endl;
        cin >> alunos[i].idade;
        cout << "introduza a sua nota" << endl;
        cin >> alunos[i].nota;
    }

    for(int i=0;i<3;i++){
        cout << "Nome\t" << alunos[i].nome << endl;
        cout << "Idade\t" << alunos[i].idade << endl;
        cout << "Nota\t" << alunos[i].nota << endl;
    }
}