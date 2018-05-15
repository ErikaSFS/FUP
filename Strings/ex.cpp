#include<iostream>
using namespace std;

string str1 = "check";
string str2 = "chess";
if (str1 == str2)
    cout << "As palavras são iguais." << endl; 
else if (str1 < str2) 
   cout << "A palavra " << str1 << " vem antes de " << str2 << endl;
else
   cout << "A palavra " << str1 << " vem depois de " << str2 << endl;
