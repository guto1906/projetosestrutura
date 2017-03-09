/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 16 de Fevereiro de 2017, 19:46
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 1-) Fazer um programa que leia vários números inteiros e positivos.
 *  A leitura se encerra quando encontrar um número negativo que quando 
 * o vetor ficar completo. Sabe-se que o vetor possui, no máximo, 10 elementos.
 * Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente
 * do vetor original. 
 */
int main(int argc, char** argv) {

    double vet[10];
    int pos;
    for (int i=0; i<10;i++){
        cout << "Digitar um numero ";
        cin >> pos;
        if(pos >= 0){
            vet[i] = pos;
            pos = i + 1;
        } else{
            pos = i;
            break;
        }
    }
    
    if(pos == 0){
        cout << "Vetor vazio";
    }else{
         for (int i=0; i< pos;i++){
             double inv;
             inv = 1/vet[i];
             cout << "vet[" << i << "] = " << vet[i];
             cout << " / Inverso de " << vet[i] << " = " << inv << endl;        
         }
    }
    
}

