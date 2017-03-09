/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maiorque.cpp
 * Author: guto
 *
 * Created on 16 de Fevereiro de 2017, 22:04
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 *4-) Criar um programa que leia dados de um vetor de  12 elementos inteiros.
 * Imprima o maior e menor sem ordenar, o percentual de números pares e a média
 * dos elementos do vetor. 
 */
int main(int argc, char** argv) {
    int i = 0;
    int maior = 0;
    int menor = 0;
    int vet[12];
    int par = 0;
    int soma = 0;
    while(i < 12){
        cout << "Digitar um número" << endl;
        cin >> vet[i];
        if (vet[i] > vet[maior]){
            maior = i;                    
        } else if(vet[i] < vet[menor]){
             menor = i;     
        
        } 
        
        if (vet[i] % 2 == 0){
            par += 1;                   
        }
        
        soma +=vet[i];
        i++;    
    }
    
    cout << "maior: " << vet[maior]<< endl;
    cout << "menor: " << vet[menor]<< endl;
    cout << i << endl;
    cout << "Percentual de pares: " << (par*100)/i << "%" << endl;
    cout << "Percentual de Impares: " << 100 - (par*100/i) << "%" << endl;
    cout << "Média dos Numeros: " << soma/i << endl;
    
    
}

