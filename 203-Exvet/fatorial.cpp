/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 16 de Fevereiro de 2017, 21:35
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 3-) Ler um vetor V de 10 elementos e obter um vetor W cujos componentes são
 *  os fatoriais dos respectivos componentes de V.
 */
int main(int argc, char** argv) {

    int vet[10];
    int fat[10];
    for(int i = 0; i < 10; i++){
        cout << "Digite um número \n";
        cin >> vet[i];
        int j= vet[i];
        if(j== 0 || j==1){
        fat[i]=1;
        } else{
        fat[i]=1;
        while(j > 0){            
            fat[i]= fat[i]*j;
            j--;           
        }
        }
    }
    for(int i = 0; i < 10; i++){
        cout << "O fatorial de " << vet[i]<< " = " << fat[i]<< endl;
    }
        
}

