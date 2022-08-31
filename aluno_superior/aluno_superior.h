//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_ALUNO_SUPERIOR_H
#define NOVO_SUAP_2_ALUNO_SUPERIOR_H
#include "aluno.h"

class aluno_superior : public aluno{
public:
    //atributos
    std::string periodo;

    //construtor
    explicit aluno_superior(){;}

    //metodos

    std::string getPeriodo() const;
};


#endif //NOVO_SUAP_2_ALUNO_SUPERIOR_H
