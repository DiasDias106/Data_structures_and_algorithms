/*Escreva a função delDup()que:
recebe um vetor de strings
devolve um novo vetor com apenas as strings únicas (sem as strings duplicadas)
Faça a função main() que permite testar a sua*/

#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

vector<string> delDup(const vector<string> &v) {
    set<string> seen;
    vector<string> uniqueStrings;
    for (const string& str : v) {
        if (seen.find(str) == seen.end()) {
            uniqueStrings.push_back(str);
            seen.insert(str);
        }
    }
    return uniqueStrings;
}

int main() {
    vector<string> V1(3);
    cout << "Introduza 3 strings:" << endl;
    for (size_t i = 0; i < 3; ++i) {
        cin.ignore();
        getline(cin, V1[i]);
    }

    vector<string> V2 = delDup(V1);

    cout << "Strings únicas:" << endl;
    for (const string& str : V2) {
        cout << str << endl;
    }

    return 0;
}