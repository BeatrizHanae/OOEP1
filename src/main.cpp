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
    Glider glider1;
    Glider memoriag;


    while (geracao < glider1.getGeracao()) {
        geracao++;
        for (i=0;i<20;i++){
          for (j=0;j<20;j++){
            cout << glider1.getMp (i,j) << " ";
            if (i!=19 && i!=0 && j!=19 && j!=0){
                celulas = celulasv(memoriag,i,j);
                if (glider1.getMp(i,j)=='*' && (celulas < 2 || celulas > 3)){
                    glider1.setMp('-', i, j);
                }
                if (glider1.getMp(i,j)=='-' && celulas == 3){
                    glider1.setMp('*', i, j);
                }
                if (glider1.getMp(i,j)=='*' && (celulas == 2 || celulas == 3)){
                    glider1.setMp ('*', i, j);
              }
            }
          }
          cout << endl;
        }
        memoriag = glider1;
        std::couts << "\n";
    }

return 0;

}
