// Função para ler um candidato
Candidato* lerCandidato() {
    int comando;
    string nome;
    double nota;

    cin >> comando;
    cin >> quoted(nome) >> nota;

    Candidato* candidato = new Candidato(nome, nota);

    return candidato;
}

// Função para ler a quantidade de candidatos
int lerQtdCandidatos() {
    int comando;
    int qtdCandidatos;

    cin >> comando >> qtdCandidatos;

    return qtdCandidatos;
}

// Função para calcular a média
double mediaNota(Candidato* candidatos[], int qtdCandidatos) {
    double soma = 0;

    for (int i = 0; i < qtdCandidatos; i++) {
        soma += candidatos[i]->getNota();
    }

    return soma / qtdCandidatos;
}

// Função para listar candidatos acima da média
void listarCandidatos(Candidato* candidatos[], int qtdCandidatos, double media) {

    int contador = 1;

    for (int i = 0; i < qtdCandidatos; i++) {
        if (candidatos[i]->getNota() > media) {
            cout << contador << " \""
                 << candidatos[i]->getNome() << "\" "
                 << candidatos[i]->getNota() << endl;

            contador++;
        }
    }

    cout << contador << endl;
}
