#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2,s3;
    bool v;
    cout << "introduza 3 palavras"<<endl;
    /*cin >> s1;
    cin >> s2;
    cin >> s3;*/

    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;


  s3 = s2 + s1;
  cout << s3 << endl;
  cout << s3.size() << endl;


}
