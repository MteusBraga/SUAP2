//
// Created by marilia on 17/08/22.
//
#include "includes.h"
using std::cout;
using std::endl;
using std::cin;
#include <fstream>

void cria_aluno_superior(materia materia ){
    aluno_superior aluno1;
    std::cout<< "Criando um aluno do ensino superior no SUAP2:" << std::endl;
    std::cout << "digite o nome do aluno: ";
    std::getchar();
    std::getline (std::cin,aluno1.nome_aluno);
    std::cout << "digite a data de nascimento, como o moedelo '12/12/1212': ";
    std::cin >> aluno1.data_nascimento_aluno;
    std::cout << "digite seu sexo: [F/M]  ";
    cin >> aluno1.sexo_aluno;
    std::cout << "digite seu CPF:  ";
    string cpf;
    cin >> cpf;
    std::cout << "digite sua idade: ";
    cin >> aluno1.idade_aluno;
    aluno1.setCPF(cpf);
    std::cout << "digite seu telefone: ";
    string telefone;
    cin >> telefone;
    aluno1.setTelefone(telefone);
    aluno1.periodo = "1";
    aluno1.situacao_aluno = "Ativa";
    boletim alana;
    alana.materias.push_back(materia);

    std::cout<< "Olá, " << aluno1.nome_aluno << " bem vindo(a) ao BPFI, você esta matriculado"
             <<" no curso de Engenharia da Computação, seu email será:" << aluno_superior::cria_email_academico(aluno1.nome_aluno) << endl;
    alana.print_boletim();
    cout << aluno1<< endl;
}

void cria_aluno_medio(materia materia ){
    aluno_ensino_medio aluno1;
    std::cout<< "Criando um aluno do ensino ensino medio no SUAP2:" << std::endl;
    std::cout << "digite o nome do aluno: ";
    std::getchar();
    std::getline (std::cin,aluno1.nome_aluno);
    std::cout << "digite a data de nascimento, como o moedelo '12/12/1212': ";
    std::cin >> aluno1.data_nascimento_aluno;
    std::cout << "digite seu sexo: [F/M]  ";
    cin >> aluno1.sexo_aluno;
    std::cout << "digite seu CPF:  ";
    string cpf;
    cin >> cpf;
    std::cout << "digite sua idade: ";
    cin >> aluno1.idade_aluno;
    aluno1.setCPF(cpf);
    std::cout << "digite seu telefone: ";
    string telefone;
    cin >> telefone;
    aluno1.setTelefone(telefone);
    aluno1.serie_ensino_medio= "1º ano do ensino médio";
    aluno1.situacao_aluno = "Ativa";
    boletim boletim_aluno;
    boletim_aluno.materias.push_back(materia);

    std::cout<< "Olá, " << aluno1.nome_aluno << " bem vindo(a) ao BPFI, você esta matriculado"
             <<" no curso de Engenharia da Computação, seu email será:" << aluno_superior::cria_email_academico(aluno1.nome_aluno) << endl;
    boletim_aluno.print_boletim();
    cout << aluno1<< endl;
}

void cria_professor(){
    professor professor1;
    cout << "Digite o nome: ";
    std::getchar();
    std::getline (std::cin,professor1.nome_professor);
    cout << "Digite um email: ";
    cin >> professor1.email;
    cout << "Professor cadastrado! "<< endl;

}

void cria_curso(){
    cursos curso;
    cout << "Digite o nome do curso: ";
    cin >> curso.nome_curso;
    cout << "Digite o id do curso: ";
    cin >> curso.id_curso;
    cout << "Curso gerado com sucesso! "<< endl;
}

 void cria_materia(){
     materia materia;
     cout <<"Nome da Materia: ";
     cin >> materia.nome_materia;
     cout << "Carga horaria: ";
     cin >> materia.carga_horaria;
     cout << "Nome do Professor responsavel: ";
     cin >> materia.professor_responsavel;
     cout << "Materia gerada com sucesso! "<< endl;
}

int main(){

//    criando um curso
    cursos engenharia_da_computacao;
    engenharia_da_computacao.nome_curso = "Engenharia da Computação";
    engenharia_da_computacao.id_curso = "2456";

    //    criando um curso
    cursos telematica;
    telematica.nome_curso = "Telemática";
    telematica.id_curso = "2478";

    //    criando um curso
    cursos mineracao;
    mineracao.nome_curso = "Mineração";
    mineracao.id_curso = "4565";


//    criando um professor
    professor professor1;
    professor1.nome_professor = "Daniel Madalena Marques";
    professor1.email = "daniel@academico.suap2.com.br";

    //    criando um professor
    professor professor2;
    professor2.nome_professor = "Daniela Barros";
    professor2.email = "daniela@academico.suap2.com.br";
//    criando uma materia
    materia POO;
    POO.carga_horaria = 62;
    POO.professor_responsavel = professor1.nome_professor;
    POO.nome_materia = "Progamação Orientada a Objeto";

    // criando outra matéria
    materia LSA;
    LSA.carga_horaria = 62;
    LSA.professor_responsavel = professor2.nome_professor;
    LSA.nome_materia = "Laboratorio de Sistemas Abertos";

    // criando outra matéria
    materia geologia;
    geologia.carga_horaria = 62;
    geologia.professor_responsavel = professor2.nome_professor;
    geologia.nome_materia = "Geologia";


    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉        ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░    ┉░░░┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒░░░░▒▒▒▒▒░░┉┉┉┉░░▒▒▒▒▒▒░░░░▒▒▒░┉┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░    ┉▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒░         ┉░▒▒▒▒░   ░┉        ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉    ┉┉░▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒▒┉░▒▒▒▒░┉   ░▒▒▒░     ┉░░░░┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉      ┉░▒▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒   ┉▒▒▒░    ░▒▒▒▒▒▒┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉    ┉▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒▒▒░░┉┉┉┉┉    ▒▒▒░   ┉▒▒▒▒▒▒▒░    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉   ┉▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒░┉   ┉┉┉┉    ▒▒▒░   ┉▒▒▒▒▒▒▒▒    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░    ▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒░   ┉▒▒▒▒▒┉   ▒▒▒░   ┉▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒    ░▒▒▒▒▒┉   ┉▒▒┉   ▒▒▒▒▒▒┉   ▒▒▒░   ┉▒▒▒▒▒▒▒┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉░░░▒░░┉    ░▒▒▒┉   ┉░░░░┉    ┉▒▒┉   ┉▒▒▒░┉    ▒▒▒░    ┉░▒▒▒░┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒┉           ┉▒▒▒▒▒▒┉       ┉░┉  ┉▒▒░┉    ┉  ┉┉   ▒▒▒░   ┉┉        ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░┉┉┉┉┉┉░░▒▒▒▒▒▒▒▒▒░┉┉┉┉┉░▒▒░░░░▒▒▒▒░┉┉┉┉░░▒░░░░▒▒▒░   ┉▒░┉┉┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<""<< std::endl;
//
//    cout << "=============================================================================================="<< endl;
//    cout << "----------> [0] CADASTRE UM ALUNO SUPERIOR "<< endl;
//    cout << "----------> [1] CADASTRE UM ALUNO DO ENSINO MÉDIO"<< endl;
//    cout << "----------> [2] CADASTRE UM PROFESSOR "<< endl;
//    cout << "----------> [3] CADASTRE UM CURSO "<< endl;
//    cout << "----------> [4] CADASTRE UM MATÉRIA "<< endl;
//    cout << "----------> [5] SAIR DO PROGAMA"<< endl;
//    cout << "=============================================================================================="<< endl;


    while (true) {
        cout << "=============================================================================================="<< endl;
        cout << "----------> [0] CADASTRE UM ALUNO SUPERIOR "<< endl;
        cout << "----------> [1] CADASTRE UM ALUNO DO ENSINO MÉDIO"<< endl;
        cout << "----------> [2] CADASTRE UM PROFESSOR "<< endl;
        cout << "----------> [3] CADASTRE UM CURSO "<< endl;
        cout << "----------> [4] CADASTRE UM MATÉRIA "<< endl;
        cout << "----------> [5] SAIR DO PROGAMA"<< endl;
        cout << "=============================================================================================="<< endl;
        int var;
        cin >> var;
        switch (var) {
            case 0:
                cria_aluno_superior(POO);
                break;
            case 1:
                cria_aluno_medio(geologia);
                break;
            case 2:
                cria_professor();
                break;
            case 3:
                cria_curso();
                break;
            case 4:
                cria_materia();
                break;
            case 5:
                exit(0);
            default:
                cout << "Nenhuma opção é válida";
        }
    }
//    std::cout<< "Criando um aluno do ensino superior no SUAP2:" << std::endl;
//    std::cout << "digite o nome do aluno: ";
//    std::getchar();
//    std::getline (std::cin,aluno1.nome_aluno);
//    std::cout << "digite a data de nascimento, como o moedelo '12/12/1212': ";
//    std::cin >> aluno1.data_nascimento_aluno;
//    boletim alana;
//    alana.materias.push_back(POO);
//
//    std::cout<< "olá, " << aluno1.nome_aluno << " bem vindo(a) ao BPFI, você esta matriculado"
//      <<" no curso de Engenharia da Computação, seu email será:" << endl;
//    alana.print_boletim();
//    cout << aluno1;
//    return 0;
}
