#include <stdio.h>

class Triangulo {

    private:

    float ladoA;
    float ladoB;
    float ladoC;

    public:

    // SETS

    bool setLadoA(float ladoA) {
        bool sucesso = false;

        if (ladoA > 0) {
            this->ladoA = ladoA;
            sucesso = true;
        }

        return sucesso;
    }

    bool setLadoB(float ladoB) {
        bool sucesso = false;

        if (ladoB > 0) {
            this->ladoB = ladoB;
            sucesso = true;
        }

        return sucesso;
    }

    bool setLadoC(float ladoC) {
        bool sucesso = false;

        if (ladoC > 0) {
            this->ladoC = ladoC;
            sucesso = true;
        }

        return sucesso;
    }

    bool setLados(float ladoA, float ladoB, float ladoC) {
        bool sucesso = false;

        if (ladoA > 0 && ladoB > 0 && ladoC > 0 &&
            ladoA + ladoB > ladoC &&
            ladoA + ladoC > ladoB &&
            ladoB + ladoC > ladoA) {

            setLadoA(ladoA);
            setLadoB(ladoB);
            setLadoC(ladoC);

            sucesso = true;
        }

        return sucesso;
    }

    // GETS

    float getLadoA() {
        float valor = ladoA;

        return valor;
    }

    float getLadoB() {
        float valor = ladoB;

        return valor;
    }

    float getLadoC() {
        float valor = ladoC;

        return valor;
    }

    // PERIMETRO

    float getPerimetro() {
        float perimetro = ladoA + ladoB + ladoC;

        return perimetro;
    }

    // VALIDACAO

    bool ehValido() {
        bool valido = false;

        if (ladoA > 0 && ladoB > 0 && ladoC > 0 &&
            ladoA + ladoB > ladoC &&
            ladoA + ladoC > ladoB &&
            ladoB + ladoC > ladoA) {

            valido = true;
        }

        return valido;
    }

    // EQUILATERO

    bool ehEquilatero() {
        bool equilatero = false;

        if (ehValido() &&
            ladoA == ladoB &&
            ladoB == ladoC) {

            equilatero = true;
        }

        return equilatero;
    }

    // ISOSCELES

    bool ehIsosceles() {
        bool isosceles = false;

        if (ehValido() &&
            (ladoA == ladoB ||
             ladoA == ladoC ||
             ladoB == ladoC)) {

            isosceles = true;
        }

        return isosceles;
    }

    // ESCALENO

    bool ehEscaleno() {
        bool escaleno = false;

        if (ehValido() &&
            ladoA != ladoB &&
            ladoA != ladoC &&
            ladoB != ladoC) {

            escaleno = true;
        }

        return escaleno;
    }

};
