#include<iostream>
using namespace std;
int main(){
    int num[3][4];
    for(size_t i=0;i<3;i++){
        cout << "aluno numero\t" << i+1 << endl;
        for(size_t j=0;j<4;j++){
            cout << "introduza notas" << endl;
            cin >> num[i][j];
        }
    }
    for(size_t i=0;i<3;i++){
       cout << "aluno numero\t" << i+1 << endl;
        for(size_t j=0;j<4;j++){
            cout << "notas:" << num[i][j] << endl;
        }
        }
}