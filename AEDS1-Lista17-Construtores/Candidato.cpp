#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define _MAX 100

class Candidato {
private:
    string nome;
    double nota;

public:

    Candidato(string nome, double nota) {
        this->nome = nome;
        this->nota = nota;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    void setNota(double nota) {
        if (nota >= 0 && nota <= 100) {
            this->nota = nota;
        }
    }

    string getNome() {
        return nome;
    }

    double getNota() {
        return nota;
    }
};
