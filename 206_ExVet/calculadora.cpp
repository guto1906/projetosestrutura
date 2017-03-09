/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculadora.cpp
 * Author: guto
 *
 * Created on 18 de Fevereiro de 2017, 21:04
 */

#include <cstdlib>
#include <iostream>



using namespace std;

/*
 * 6-) Fazer um programa que, dados dois vetores de 7 posições cada, efetue
 * as operações aritméticas básicas, indicadas por um terceiro vetor cujos
 * dados também são fornecidos pelo usuário, gerando e imprimindo um quarto vetor.
 */
int main(int argc, char** argv) {

    double parcela1[7];
    double parcela2[7];
    char operacao[7];
    double resultado[7];
    
    for(int i = 0; i < 7; i++){
        
        cout << "Entre com a primeira parcela \n";
        cin >> parcela1[i];
        
        cout << "Entre com a operacao valida +; -; x; / \n";
        cin >>operacao[i];
        
               
       while((operacao[i] != '+') && (operacao[i] != '-') && (operacao[i] != 'x') && (operacao[i] != '/') ){
       cout << "Entre com a operacao valida +; -; x; / \n";
       cin >>operacao[i];
       }
               
        cout << "Entre com a segunda parcela \n";
        cin >> parcela2[i];
        
        switch(operacao[i]){
            case '+':
                resultado[i] = parcela1[i] + parcela2[i];
                break;
            case '-':
                resultado[i] = parcela1[i] - parcela2[i];
                break;
            case 'x':
                resultado[i] = parcela1[i] * parcela2[i];
                break;
            case '/':
                while(parcela2[i]== 0){
                cout << "Entre com um valor diferente de zero" << endl;
                cin >> parcela2[i];                
                } 
                resultado[i] = parcela1[i] / parcela2[i];
                break; 
            default:
                break;
        }
        cout << "Resultado \n";
        cout << resultado[i]<< "\n \n";
        
    }
    
   for(int i = 0; i < 7; i++){
   cout << parcela1[i]<< " " << operacao[i] << " " << parcela2[i] << " = " << resultado[i]<< endl;
   }
    
}

