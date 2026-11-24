#include<iostream>
#include<string>
using namespace std;
struct aluno{
    string nome;
    int idade;
    int notas[3];
    float media;
};
int main(){
    aluno alunos[3];
    for(int i=0;i<3;i++){
        cout << "introduza o nome do aluno" << endl;
        cin >> alunos[i].nome;
        cout << "introduza a idade do aluno" << endl;
        cin >> alunos[i].idade;
        for(int j=0;j<3;j++){
        cout << "introduza a nota do aluno" << endl;
        cin >> alunos[i].notas[j];
        alunos[i].media = 0;
         alunos[i].media += alunos[i].notas[i];
        }
        
    }
    for(int i=0;i<3;i++){
        cout << "Nome:" << alunos[i].nome<< endl;
        cout << "idade:" << alunos[i].idade << endl;
        for(int j=0;j<3;j++){
            cout << "Notas:" << alunos[i].notas[j] << endl;
        }
        cout << "media:" << (alunos[i].media)/3 <<endl;
    }
}