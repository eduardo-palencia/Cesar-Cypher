//Cifrado de Cesar  || Elaborado en Replit
// Creado por: Eduardo Palencia Rodríguez [A01424069]
//20 de Agosto de 2021

#include<iostream>
#include<string>
using namespace std;

int i,j,k;
string msg,t;
char key;

  int convertIndex(char abc[],char key)
  {
    for(int i = 0; i<26; i++)
    {
        if(key == abc[i]){
            return i;
        }
    }
  }

int main(){
    //int key;
    char abc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout<<"Ingresa la llave (letra minuscula): " << endl;
    cin>>key;
    cout<<"Ingresa el mensaje (letras minusculas): " << endl;
    cin>>msg;

    int index = convertIndex(abc,key);
    for(i=0;i<msg.size();i++){
        t+=(msg[i]-'a'+index)%26+'a';
    }
    cout<<"El mensaje encriptado es: "<<t<<'\n';
    //cout << index;
    return 0;
}
