/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guto
 *
 * Created on 27 de Abril de 2017, 20:38
 */

#include <cstdlib>

#include "Teste.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Teste OB;
    OB.receba();
    cout << OB.A<< " + "<< OB.B<< " = "<< OB.soma()<< "\n";
    cout << OB.A<< " - "<< OB.B<< " = "<< OB.sub()<< "\n";
    

    return 0;
}

