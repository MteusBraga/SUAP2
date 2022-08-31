//
// Created by marilia on 17/08/22.
//

#ifndef NOVO_SUAP_2_ALUNO_H
#define NOVO_SUAP_2_ALUNO_H
#include <string>

using std::string;
using std::ostream;

class aluno {
public:
    // construtor vazio
    explicit aluno(){;}

//    sobrecarregando >>
    friend ostream& operator<<(ostream& os, const aluno& a);

//    atributos publicos de aluno
    string nome_aluno;
    int idade_aluno;
    string sexo_aluno;
    string data_nascimento_aluno;
    string situacao_aluno;

    //funções
    void setCRE(float cre) ;

    void setCPF(string cpf);

    void setTelefone(string telefone);
    static string cria_email_academico(string nome);

protected:
//    atributos privados
    float CRE_aluno = 0.0;
    string CPF_aluno = "-";
    string telefone_aluno = "-";

    // funções privadas


};



#endif //NOVO_SUAP_2_ALUNO_H
