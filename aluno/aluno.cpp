//
// Created by marilia on 21/08/22.
//
#include "aluno.h"
#include <vector>
#include <string>
#include <iostream>
using std::string;

std::vector<std::string> split(const std::string& text, char sep){
    std::vector<std::string> tokens;
    std::size_t start = 0, end = 0;

    while ((end = text.find(sep, start)) != std::string::npos)
    {
        tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(text.substr(start));
    return tokens;
}


string aluno::cria_email_academico(string nome)  {
    nome = split(nome, ' ')[0];
    string nome_aluno(nome);
    return nome_aluno += "@academico.suap2.com.br";
}

ostream &operator<<(ostream &os, const aluno &a) {
    os << "===================== INFORMAÇÕES DO ALUNO =====================================" << std::endl;
    os << "Nome Aluno: " <<a.nome_aluno << "\n";
    os << "Data de Nascimento: "<<a.data_nascimento_aluno << "\n";
    os <<"CPF: "<< a.CPF_aluno << "\n";
    os << "CRE: "<<a.CRE_aluno << "\n";
    os << "Idade: "<<a.idade_aluno << "\n";
    os <<"Sexo: "<< a.sexo_aluno << "\n";
    os <<"Situação Aluno: "<< a.situacao_aluno << "\n";
    os <<"Telefone: "<< a.telefone_aluno << "\n";
    return os;
}

void aluno::setCRE(float cre)  {
    this->CRE_aluno = cre ;
}

void aluno::setCPF(string cpf){
    this->CPF_aluno = cpf;
}

void aluno::setTelefone(string telefone) {
    this->telefone_aluno =telefone;
}




