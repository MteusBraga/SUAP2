
//#endif //NOVO_SUAP_2_PROFESSOR_H
//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_PROFESSOR_H
#define NOVO_SUAP_2_PROFESSOR_H
#include <string>
#include "../aluno/aluno.h"
#include "../materia/materia.h"
#include "../boletim/boletim.h"


using std::string;

class professor : public materia {

public:
    professor() { }
    std::string nome_professor;
    std::string email;
    void adiciona_nota(boletim boletim_aluno, materia materia);

};

#endif //NOVO_SUAP_2_PROFESSOR_H