#include <iostream>
#include "glider.hpp"
#include "matriz.hpp"

int celulasv (Glider memoria, int linha, int coluna){
    int vivos= 0;
      if (memoria.getMp(linha-1,coluna-1) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha-1,coluna) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha-1,coluna+1) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha,coluna-1) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha,coluna+1) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha+1,coluna-1) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha+1,coluna) == '*'){
          vivos++;
      }
      if (memoria.getMp(linha+1,coluna+1) == '*'){
          vivos++;
      }
    return vivos;
}

int main (int argc, char ** argv){
    int i, j;
    int celulas;
    int geracao = 0;
    Glider gabi;
    Glider memoriag;


    while (geracao < gabi.getGeracao()) {
        geracao++;
        for (i=0;i<20;i++){
          for (j=0;j<20;j++){
            cout << gabi.getMp (i,j) << " ";
            if (i!=19 && i!=0 && j!=19 && j!=0){
                celulas = celulasv(memoriag,i,j);
                if (gabi.getMp(i,j)=='*' && (celulas < 2 || celulas > 3)){
                    gabi.setMp('-', i, j);
                }
                if (gabi.getMp(i,j)=='-' && celulas == 3){
                    gabi.setMp('*', i, j);
                }
                if (gabi.getMp(i,j)=='*' && (celulas == 2 || celulas == 3)){
                    gabi.setMp ('*', i, j);
              }
            }
          }
          cout << endl;
        }
        memoriag = gabi;
    }

return 0;

}
