#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque *arma = new Rosa("Super Rosa Amarela", 0, 10);
    ArmaAtaque *arma2 = new Colher("Colher de Pata", 0, 50);
    ArmaDefesa *escudo = new Escudo("Latão", 1);

    Personagem *chaves1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem *chaves2 = new Chaves(2, "Chaves Eq2", 100, arma, escudo);

    Simulador *simulador = new Simulador();
    simulador->adicionarPersonagem(chaves1, 1);
    simulador->adicionarPersonagem(chaves2, 2);

    simulador->iniciarSimulacao();

    return 0;
}