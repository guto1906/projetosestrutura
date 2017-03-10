/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   converttemp.cpp
 * Author: guto
 *
 * Created on 9 de Março de 2017, 19:32
 * 1- Desenvolva um programa que tenha duas funções fahrenheit e celsius, onde
 *  você entra com um valor em fahrenheit e transforma em celsius e vice e versa.
 * Fórmula Celsius: (fahrenheit – 32) * 5/9;
 * Fahrenheit = (Celsius * 9/5) + 32;
 * 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

double converttempcelsius(double ti){
    double tf;
    tf = (ti - 32)*(5/9);    
    return tf;
}
double converttempfarhrenheit(double ti){
    double tf;
    tf = (ti*(9/5)) + 32;
    return tf;
}


int main(int argc, char** argv) {
    double ti;
    double tf;
    char T;
    
    cout << "Entre com o valor da temperatura \n";
    cin >> ti;    
    int i = 0;
    while (i == 0 ){
    cout << "Entre com F para converter de Celsius para Farhrenheit \n";
    cout << "ou com C para converter de Farhrenheit para Celsius \n";
    cin >> T;
    if(T == 'C'){
        cout << converttempcelsius(ti)<< "º C";
        i = 1;
    } else if(T == 'F'){
        cout << converttempfarhrenheit(ti) << "º F";
        i = 1;
    } else {
        i = 0;
    }
    }
}



