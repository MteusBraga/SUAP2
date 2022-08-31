//
// Created by marilia on 17/08/22.
//

#include "professor.h"
#include <iostream>
#include <string>
#include "aluno.h"
#include "../boletim/boletim.h"
#include "../materia/materia.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

void professor::adiciona_nota(boletim boletim_aluno, materia materia){
    int var;
    cout<< "===> [1] para primeira nota;"<< endl;
    cout<< "===> [2] para primeira nota;"<< endl;
    cout<< "===> [3] para primeira nota;"<< endl;
    cin >> var;
    switch (var) {
        case 1:
            cout << "Digite a nota 1: ";
            cin >> this->nota1;
            break;
        case 2:
            cout << "Digite a nota 2: ";
            cin >> this->nota2;
            break;
        case 3:
            cout << "Digite a nota 3: ";
            cin >> this->nota3;
            break;
    }
}
