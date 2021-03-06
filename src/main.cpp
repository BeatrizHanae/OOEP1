//Aluna: Beatriz Hanae Fujimoto (160113814)

#include <iostream>
#include "glider.hpp"
#include "campo.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "gosper.hpp"
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char ** argv){
    int i, j, numero;
    int celulas;
    int geracao = 0;
    Campo vida;
    Campo memoriag;
    Blinker blinker;
    Block block;
    Glider glider;
    Gosper gosper;

    cout << "\n";
    cout << "Escolha um número para abrir um jogo: " << endl;
    cout << "Digite 1 para Blinker" << endl;
    cout << "Digite 2 para Block" << endl;
    cout << "Digite 3 para Glider" << endl;
    cout << "Digite 4 para Gosper Glider Gun" << endl;

    cin >> numero;

    if (numero == 1){
      vida = blinker;
    } else if (numero == 2){
      vida = block;
    } else if (numero == 3){
    vida = glider;
    } else if (numero == 4){
    vida = gosper;
    }

    memoriag = vida;

    while (geracao < vida.getGeracao()) {
        geracao++;
        system ("clear");
        for (i=0;i<35;i++){
          for (j=0;j<45;j++){
            cout << vida.getCampo (i,j) << " ";
            if (i!=34 && i!=0 && j!=44 && j!=0){
                celulas = memoriag.celulasv(memoriag,i,j);
                if (vida.getCampo(i,j)=='*' && (celulas < 2 || celulas > 3)){
                    vida.setCampo('-', i, j);
                  }
                  if (vida.getCampo(i,j)=='-' && celulas == 3){
                      vida.setCampo('*', i, j);
                }
                if (vida.getCampo(i,j)=='*' && (celulas == 2 || celulas == 3)){
                    vida.setCampo('*', i, j);
              }
            }
          }
          cout << endl;
        }
        memoriag = vida;
        std::cout << "\n";
        usleep (200000);
    }

return 0;

}
