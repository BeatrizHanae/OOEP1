#include <iostream>
#include "campo.hpp"

Campo::Campo(){
    int i, j;
    tamanho = 0;
    for (i=0;i<60;i++){
      for (j=0;j<60;j++){
        campo[i][j] = '-';
      }
    }
    geracao = 0;

}

int Campo::getTamanho(){
    return tamanho;
}
void Campo::setTamanho(int tamanho){
  this -> tamanho = tamanho;
}

char Campo::getCampo (int linha, int coluna){
    return campo[linha][coluna];
}

void Campo::setCampo (char celula, int linha, int coluna){
  campo[linha][coluna] = celula;
}

int Campo::getGeracao (){
    return geracao;
}
void Campo::setGeracao (int geracao){
  this -> geracao = geracao;
}
