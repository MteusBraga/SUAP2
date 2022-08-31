//
// Created by marilia on 17/08/22.
//

#include "materia.h"
#include <iostream>
using std::ostream;
using std::endl;

ostream &operator<<(ostream &out, materia &materia) {
    out << "\t\t____________________________________" << endl <<
        "Materias referente: " << materia.nome_materia << endl <<
        "Professor Responsavel: " << materia.professor_responsavel << endl <<
        "Carga Horaria: " << materia.carga_horaria << "h"<<endl <<
        "\t\t____________________________________" << endl;

    return out;
}

float materia::retorna_soma_materia() const {
    return this->nota1 + this->nota2 + this->nota3;
}
