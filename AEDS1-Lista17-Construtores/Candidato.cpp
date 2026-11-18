#include <iostream>
#include <string>
#include <limits>
using namespace std;

#define _MAX 100

class Candidato {
private:
    string nome;
    double nota;

public:

    Candidato(string nome, double nota) {
        this->nome = nome;
        this->nota = 0;
        setNota(nota);
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    void setNota(double nota) {
        if (nota >= 0 && nota <= 100) {
            this->nota = nota;
        } else {
            cout << "Nota invalida! Digite uma nota entre 0 e 100.\n";
        }
    }

    string getNome() {
        return nome;
    }

    double getNota() {
        return nota;
    }
};

// Função para ler um candidato
Candidato* lerCandidato() {
    string nome;
    double nota;

    cout << "Digite o nome do candidato:\n";
    getline(cin, nome);

    cout << "Digite a nota do candidato:\n";
    cin >> nota;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Candidato* CANDIDATO = new Candidato(nome, nota);

    return CANDIDATO;
}

// Função para ler a quantidade de candidatos
int lerQtdCandidatos() {
    int qtdCandidatos = 0;

    cout << "Digite a quantidade de candidatos:\n";
    cin >> qtdCandidatos;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (qtdCandidatos <= 0 || qtdCandidatos > _MAX) {
        cout << "Quantidade inválida! Digite novamente:\n";
        cin >> qtdCandidatos;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return qtdCandidatos;
}

// Função para calcular a média
double mediaNota(Candidato* candidatos[], int qtdCandidatos) {
    double soma = 0;

    for (int i = 0; i < qtdCandidatos; i++) {
        soma += candidatos[i]->getNota();
    }

    double media = soma / qtdCandidatos;

    return media;
}

// Função para listar candidatos acima da média
void listarCandidatos(Candidato* candidatos[], int qtdCandidatos, double media) {

    for (int i = 0; i < qtdCandidatos; i++) {
        if (candidatos[i]->getNota() > media) {
            cout << candidatos[i]->getNome() << " "
                 << candidatos[i]->getNota() << endl;
        }
    }
}
