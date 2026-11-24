#include<iostream>
#include<string>
using namespace std;
int main(){
    char s1[30];
    char s2[30];
    char s3[30];
    char sfinal[30];
    cout << "introduza 3 frases" << endl;
    cin.getline(s1,30);
    cin.getline(s2,30);
    cin.getline(s3,30);

    cout << strlen(s1) << endl;
    strcpy(sfinal,s1);
    strcat(s1,s2);
}