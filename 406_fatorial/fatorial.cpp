/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fatorial.cpp
 * Author: guto
 *
 * Created on 9 de Março de 2017, 22:05
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 6- Gere uma função que trabalhe com fatorial, lembrando o fatorial
 *  é ele vezes a quantidade dele mesmo. Ex. fat 5 = 5*4*3*2*1.
 */

int fatorial(int a){
    int r = 1, i = 1;
    if(a != 0 && a != 1){
        while(i <= a){
        r = r * i;
        i ++;
    }       
    }    
    return r;

}

int main(int argc, char** argv) {

    int a;
    cout << "Entre com um numero \n";
    cin >> a;
    cout << "Fatorial de " << a <<" = "<< fatorial(a);
}

