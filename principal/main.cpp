#include <iostream>
#include <string>
// Importando as armas de ataque
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/BolaQuadrada.hpp"
#include "../acessorios-hpp/GarrafaDeRefrigerante.hpp"
#include "../acessorios-hpp/Martelo.hpp"
#include "../acessorios-hpp/Pneu.hpp"
#include "../acessorios-hpp/TacaDeAgua.hpp"
// Importando as armas de defesa
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Chapeu.hpp"
#include "../acessorios-hpp/Boina.hpp"
#include "../acessorios-hpp/Balde.hpp"
#include "../acessorios-hpp/Mochila.hpp"
#include "../acessorios-hpp/Tambor.hpp"
// Importando os personagens
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chiquinha.hpp"
#include "../personagens-hpp/SeuMadruga.hpp"
#include "../personagens-hpp/ProfessorGirafales.hpp"
#include "../personagens-hpp/Quico.hpp"
#include "../personagens-hpp/DonaFlorinda.hpp"
// Importando o simulador
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque *rosa = new Rosa("Rosa", 0, 10);
    ArmaAtaque *colher = new Colher("Colher", 0, 10);
    ArmaAtaque *bolaQuadrada = new BolaQuadrada("Bola Quadrada", 0, 10);
    ArmaAtaque *garrafaDeRefrigerante = new GarrafaDeRefrigerante("Garrafa de Refrigerante", 0, 10);
    ArmaAtaque *martelo = new Martelo("Martelo", 0, 10);
    ArmaAtaque *pneu = new Pneu("Pneu", 0, 10);
    ArmaAtaque *tacaDeAgua = new TacaDeAgua("Taca de Agua", 0, 10);

    ArmaDefesa *escudo = new Escudo("Escudo", 1);
    ArmaDefesa *chapeu = new Chapeu("Chapeu", 1);
    ArmaDefesa *boina = new Boina("Boina", 1);
    ArmaDefesa *balde = new Balde("Balde", 1);
    ArmaDefesa *mochila = new Mochila("Mochila", 1);
    ArmaDefesa *tambor = new Tambor("Tambor", 1);

    Personagem *chaves1 = new Chaves(1, "Chaves Eq1", 100, rosa, escudo);
    Personagem *chaves2 = new Chaves(2, "Chaves Eq2", 100, colher, chapeu);

    Personagem *chiquinha1 = new Chiquinha(1, "Chiquinha Eq1", 100, bolaQuadrada, boina);
    Personagem *chiquinha2 = new Chiquinha(2, "Chiquinha Eq2", 100, garrafaDeRefrigerante, balde);

    Personagem *seuMadruga1 = new SeuMadruga(1, "Seu Madruga Eq1", 100, martelo, mochila);
    Personagem *seuMadruga2 = new SeuMadruga(2, "Seu Madruga Eq2", 100, pneu, tambor);

    Personagem *professorGirafales1 = new ProfessorGirafales(1, "Professor Girafales Eq1", 100, tacaDeAgua, escudo);
    Personagem *professorGirafales2 = new ProfessorGirafales(2, "Professor Girafales Eq2", 100, rosa, chapeu);

    Personagem *quico1 = new Quico(1, "Quico Eq1", 100, bolaQuadrada, boina);
    Personagem *quico2 = new Quico(2, "Quico Eq2", 100, garrafaDeRefrigerante, balde);

    Personagem *donaFlorinda1 = new DonaFlorinda(1, "Dona Florinda Eq1", 100, martelo, balde);
    Personagem *donaFlorinda2 = new DonaFlorinda(2, "Dona Florinda Eq2", 100, pneu, mochila);

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