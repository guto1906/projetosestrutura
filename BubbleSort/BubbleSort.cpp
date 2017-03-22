/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.cpp
 * Author: guto
 *
 * Created on 18 de Março de 2017, 23:13
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

void bubbleSort(int vet[], int tamanho){
    int temp, i, j;
    for(i= tamanho - 1; i > 0; i--){
        for(j= 0; j < i; j++){
            if(vet[j] > vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                
            }
            
        }
    }

}

int main(int argc, char** argv) {

    int numeros[20], i;
    for(i = 0; i < 20; i++){
        numeros[i] = rand() % 1000;
    }
    cout<< "Antes da ordenação \n";
    for(i = 0; i < 20; i++){
        cout << numeros[i]<<" ";
    }
    cout<< "\n";
    cout<< "Depois da ordenação \n";
    bubbleSort(numeros, 20);
    for(i = 0; i < 20; i++){
        cout << numeros[i]<<" ";
    }
    
}

