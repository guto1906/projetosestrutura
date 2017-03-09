/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ordenacao.cpp
 * Author: guto
 *
 * Created on 18 de Fevereiro de 2017, 18:32
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 5-) Criar um vetor com a 8 elementos e ordena-los.
 */
int main(int argc, char** argv) {

    int i = 0;    
    int vet[8];
    while(i < 8){
        cout << "Digitar um número" << endl;
        cin >> vet[i];
        i++;    
    }
    cout << endl;    
    cout << "vetor normal"<< endl;
    
    for (i = 0; i < 8; i++){
        cout << "V[" << i <<"]= "<< vet[i]<< endl;
        }
    cout << endl;
    
    for(i = 0; i < 8; i++){
        int menor = i;
        for(int j = i; j < 8; j++){
            if (vet[j] < vet[menor]){
                menor = j;                   
            }           
        } 
        int tmp = vet[i];
        vet[i] = vet[menor];
        vet[menor]= tmp; 
    
    }
    
    cout << "vetor ordenado"<< endl;
    cout << endl;
        
        for (i = 0; i < 8; i++){
        cout << "V[" << i <<"]= "<< vet[i]<< endl;
        }
    
        
}

