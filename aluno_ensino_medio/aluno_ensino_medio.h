//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_ALUNO_ENSINO_MEDIO_H
#define NOVO_SUAP_2_ALUNO_ENSINO_MEDIO_H
#include <string>
#include "aluno.h"
using std::string;


class aluno_ensino_medio : public aluno {
public:
    //atributos
    string serie_ensino_medio;

    //constructor
    aluno_ensino_medio() {;}


};


#endif //NOVO_SUAP_2_ALUNO_ENSINO_MEDIO_H
