#include<iostream>
#include<string>
using namespace std;
struct aluno{
    int numero;
    string nome;
    int nota1;
};
int main(){
    aluno alunos[3];
    for(size_t i=0;i<3;i++){
        cout << "introduza o seu numero:" << endl;
        cin >> alunos[i].numero;
        cout << "introduza o seu nome:" << endl;
        cin >> alunos[i].nome;
        cout << "introduza uma nota:" << endl;
        cin >> alunos[i].nota1;
    }

    for(size_t i=0;i<3;i++){
        cout << "Numero:\t" << alunos[i].numero << endl;
        cout << "Nome:\t" << alunos[i].nome << endl;
        cout << "Nota:\t" << alunos[i].nota1 << endl;
    }
}
