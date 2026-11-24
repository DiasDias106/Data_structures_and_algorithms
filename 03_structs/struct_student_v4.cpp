#include<iostream>
#include<string>
using namespace std;
struct aluno
{
    int numero;
    string nome;
    int nota1,nota2,nota3;
    float media;
};

int main(){
aluno alunos[3];
for(int i=0;i<3;i++){
    cout<< "introduza numero:"<<endl;
    cin >> alunos[i].numero;
     cout<< "introduza nome:"<<endl;
    cin >> alunos[i].nome;
     cout<< "introduza nota1:"<<endl;
    cin >> alunos[i].nota1;
     cout<< "introduza nota2"<<endl;
    cin >> alunos[i].nota2;
     cout<< "introduza nota3:"<<endl;
    cin >> alunos[i].nota3;
    alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
}
for(int i=0;i<3;i++){
    cout << "numero:\t"<<alunos[i].numero << "\t" << "nome:\t" << alunos[i].nome << "\t" << "nota1: \t" << alunos[i].nota1 << "\t" << "nota2:\t" << alunos[i].nota2 << "\t" << "nota3:\t" << alunos[i].nota3 << "\t" << "media:\t" << alunos[i].media << "\t" << endl;
}
}