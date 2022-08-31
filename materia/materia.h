//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_MATERIA_H
#define NOVO_SUAP_2_MATERIA_H
#include <string>
#include "aluno.h"

using std::ostream;
using std::string;

class materia {
    friend ostream &operator<<(ostream &out, materia &materia);
public:
    string nome_materia;
    string professor_responsavel;
    int carga_horaria;

    //    construtor
    explicit materia(){;}

protected:
//    notas que são colocadas por professor
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;

//    métodos
    void retorna_resultado(){}
    float retorna_soma_materia() const;
};

#endif //NOVO_SUAP_2_MATERIA_H
