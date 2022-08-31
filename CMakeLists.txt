cmake_minimum_required(VERSION 3.22)
project(novo_SUAP_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(aluno)
include_directories(aluno_ensino_medio)

add_executable(novo_SUAP_2
        aluno/aluno.h
        aluno_ensino_medio/aluno_ensino_medio.cpp
        aluno_ensino_medio/aluno_ensino_medio.h
        aluno_superior/aluno_superior.h
        aluno_superior/aluno_superior.cpp
        materia/materia.h
        materia/materia.cpp
        professor/professor.h
        professor/professor.cpp
        materia/materia.cpp
        materia/materia.h
        boletim/boletim.cpp
        boletim/boletim.h
        main.cpp cursos/cursos.cpp
        cursos/cursos.h
        aluno/aluno.cpp
        includes.h
        )
