int main() {

    Candidato* candidatos[_MAX];

    int qtdCandidatos = lerQtdCandidatos();

    for (int i = 0; i < qtdCandidatos; i++) {
        candidatos[i] = lerCandidato();
    }

    int comando;
    cin >> comando;

    double media = mediaNota(candidatos, qtdCandidatos);

    listarCandidatos(candidatos, qtdCandidatos, media);

    for (int i = 0; i < qtdCandidatos; i++) {
        delete candidatos[i];
    }

    return 0;
}
