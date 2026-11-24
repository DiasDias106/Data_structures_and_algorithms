#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> trans(vector<vector<int>> &v);
int main(){
    vector<vector<int>> myL ={{5,4,3},{3,4,5}};
    
    vector<vector<int>> transposta = trans(myL);

    for(auto El : myL){
        for(auto rom : El){
            cout << rom << "\t";
        }
    }
    cout << endl;

    for(auto El : transposta){
        for(auto rom : El){
            cout << rom << "\t";
        }
    }
}

vector<vector<int>> trans(vector<vector<int>> &v){
    size_t linhas = v.size();
    size_t colunas = v[0].size();

    vector<vector<int>> transposta(colunas,vector<int>(linhas));

    for(size_t i=0;i<v.size();i++){
        for(size_t j=0;j<v[i].size();j++){
            transposta[j][i] = v[i][j];
        }
    }
    return transposta;
}