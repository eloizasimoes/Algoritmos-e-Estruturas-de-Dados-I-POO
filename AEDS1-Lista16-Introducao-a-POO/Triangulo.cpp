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
        return ladoA;
    }

    float getLadoB() {
        return ladoB;
    }

    float getLadoC() {
        return ladoC;
    }

    // PERIMETRO

    float getPerimetro() {
        return ladoA + ladoB + ladoC;
    }

    // VALIDACAO

    bool ehValido() {
        return ladoA > 0 && ladoB > 0 && ladoC > 0 &&
               ladoA + ladoB > ladoC &&
               ladoA + ladoC > ladoB &&
               ladoB + ladoC > ladoA;
    }

    // EQUILATERO

    bool ehEquilatero() {
        return ehValido() &&
               ladoA == ladoB &&
               ladoB == ladoC;
    }

    // ISOSCELES

    bool ehIsosceles() {
        return ehValido() &&
               (ladoA == ladoB ||
                ladoA == ladoC ||
                ladoB == ladoC);
    }

    // ESCALENO

    bool ehEscaleno() {
        return ehValido() &&
               ladoA != ladoB &&
               ladoA != ladoC &&
               ladoB != ladoC;
    }

};
