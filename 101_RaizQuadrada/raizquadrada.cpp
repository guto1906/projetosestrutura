/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 9 de Fevereiro de 2017, 20:34
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    /*1. Crie um programa que solicite ao usuário os três
     *  coeficientes de uma equação do segundo grau e informe
     *  os valores de x’ e x’’.*/
    int a;
    int b;
    int c;
    double delta;
    double x1;
    double x2;
    cout << "coeficiente x2 = ";
    cin >> a; 
    cout << "coeficiente2 x = ";
    cin >> b;
    cout << "coeficiente3 termo independente = ";
    cin >> c;
            
    delta = (b*b) - (4*a*c); 
        
    if(delta < 0) {
        cout << "Não existe raiz real \n" << endl;
    } else if (delta == 0){
        x1 = -b / (2*a);
        cout << "X1 = X2 = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    
    
}

