#include<iostream>
using namespace std;
int main(){
    int num[5][3];
    float media_aluno[5];
    float media_t;
    cout << "introduza o seu numero" << endl;
    for(int i=0;i<5;i++){
        cout << "introduza as suas 3 notas"<<endl;
    for(int j=0;i<3;i++){
        cin >> num[i][1];
        cin >> num[i][2];
        cin >> num[i][3];
        media_aluno[i] = (num[i][1] + num[i][2] + num[i][3]) /3;
        media_t += media_aluno[i];
    }
    }
}