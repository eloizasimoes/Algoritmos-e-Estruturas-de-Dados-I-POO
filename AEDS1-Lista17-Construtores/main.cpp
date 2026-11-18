int main() {

    Candidato* Canditados[_MAX];

    int qtdCandidatos = lerQtdCandidatos();

    for (int i = 0; i < qtdCandidatos; i++) {
        Canditados[i] = lerCandidato();
    }

    double media = mediaNota(Canditados, qtdCandidatos);

    listarCandidatos(Canditados, qtdCandidatos, media);

    for (int i = 0; i < qtdCandidatos; i++) {
        delete Canditados[i];
    }

    return 0;
}
