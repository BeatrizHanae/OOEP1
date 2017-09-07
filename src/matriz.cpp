#include <iostream>
#include "matriz.hpp"

Matriz::Matriz(){
    int i, j;
    tamanho = 0;
    for (i=0;i<60;i++){
      for (j=0;j<60;j++){
        mp[i][j] = '-';
      }
    }
    geracao = 0;

}

Matriz::~Matriz (){
}

int Matriz::getTamanho(){
    return tamanho;
}
void Matriz::setTamanho(int tamanho){
  this -> tamanho = tamanho;
}

char Matriz::getMp (int linha, int coluna){
    return mp[linha][coluna];
}

void Matriz::setMp (char celula, int linha, int coluna){
  mp[linha][coluna] = celula;
}

int Matriz::getGeracao (){
    return geracao;
}
void Matriz::setGeracao (int geracao){
  this -> geracao = geracao;
}
