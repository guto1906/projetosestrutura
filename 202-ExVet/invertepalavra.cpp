/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 16 de Fevereiro de 2017, 20:14
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
  2-) Criar um programa que crie um vetor com 10 posições e carregue com
 *  uma palavra, depois imprima o vetor de uma maneira que exiba a palavra
 *  ao contrário (ex. casa...asac)
 */
int main(int argc, char** argv) {
    
    char vet[10];
    int pos; 
    
    for(int i = 0; i < 10; i++){
        cout << "Digitar a "<< i+1 <<"ª Letra ou 9 para sair \n";
        cin >> vet[i];      
         
        if(vet[i] == '9'){
             pos = i;
             break;
        }else{          
            pos = i + 1; 
        }
    
    }
    
    if(pos == 0){
        cout << "Palavra Inválida";
    } else {
          for(int i = 0; i < pos; i++){
           cout << vet[i];    
          }
          cout << endl;
          for(int i = (pos-1); i >= 0; i--){
           cout << vet[i];    
          }
    }
    
    

    
}

