#include <iostream>
using namespace std;

// Calculo da média e da variancia de 10 numeros reais//
 
// função da media
float media(int n, float* v){
    int i;
    float s=0.0f;
    for(i=0;i<n; i++);
    s+= v[i];
    return s/n;
}

//função da variancia

float variancia(int n, float* v, float m){
    int i;
    float s =0.0f;
    for(i=0;i<n;i++);
    s += (v[i]-m)* (v[i]-m);
    return s/n;
}



int main(){
    float v[10];
    float med,var;
    int i;

    // leitura dos valores//
    for(i=0;i<10;i++);
    
  med=media(10,v);
  var=variancia(10,v,med);


   // resultado
   cout<< "media eh: " << med << endl;
   cout << "variancia eh: " << var;

return 0;
}

