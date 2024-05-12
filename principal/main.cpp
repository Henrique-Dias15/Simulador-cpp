#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chiquinha.hpp"
#include "../personagens-hpp/SeuMadruga.hpp"
#include "../personagens-hpp/ProfessorGirafales.hpp"
#include "../personagens-hpp/Quico.hpp"
#include "../personagens-hpp/DonaFlorinda.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque *arma = new Rosa("Rosa", 0, 10);
    ArmaDefesa *escudo = new Escudo("Escudo", 1);

    Personagem *chaves1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem *chaves2 = new Chaves(2, "Chaves Eq2", 100, arma, escudo);

    Personagem *chiquinha1 = new Chiquinha(1, "Chiquinha Eq1", 100, arma, escudo);
    Personagem *chiquinha2 = new Chiquinha(2, "Chiquinha Eq2", 100, arma, escudo);

    Personagem *seuMadruga1 = new SeuMadruga(1, "Seu Madruga Eq1", 100, arma, escudo);
    Personagem *seuMadruga2 = new SeuMadruga(2, "Seu Madruga Eq2", 100, arma, escudo);

    Personagem *professorGirafales1 = new ProfessorGirafales(1, "Professor Girafales Eq1", 100, arma, escudo);
    Personagem *professorGirafales2 = new ProfessorGirafales(2, "Professor Girafales Eq2", 100, arma, escudo);

    Personagem *quico1 = new Quico(1, "Quico Eq1", 100, arma, escudo);
    Personagem *quico2 = new Quico(2, "Quico Eq2", 100, arma, escudo);

    Personagem *donaFlorinda1 = new DonaFlorinda(1, "Dona Florinda Eq1", 100, arma, escudo);
    Personagem *donaFlorinda2 = new DonaFlorinda(2, "Dona Florinda Eq2", 100, arma, escudo);

    Simulador *simulador = new Simulador();
    simulador->adicionarPersonagem(chaves1, 1);
    simulador->adicionarPersonagem(chaves2, 2);
    simulador->adicionarPersonagem(chiquinha1, 1);
    simulador->adicionarPersonagem(chiquinha2, 2);
    simulador->adicionarPersonagem(seuMadruga1, 1);
    simulador->adicionarPersonagem(seuMadruga2, 2);
    simulador->adicionarPersonagem(professorGirafales1, 1);
    simulador->adicionarPersonagem(professorGirafales2, 2);
    simulador->adicionarPersonagem(quico1, 1);
    simulador->adicionarPersonagem(quico2, 2);
    simulador->adicionarPersonagem(donaFlorinda1, 1);
    simulador->adicionarPersonagem(donaFlorinda2, 2);

    simulador->iniciarSimulacao();

    return 0;
}