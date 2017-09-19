Aluna: Beatriz Hanae Fujimoto
Matricula: 16/0113814

Jogo da Vida

Como jogar:

No terminal linux execute o "make" que copila o código, em seguida o "make run".
Quando executado, abrirá um menu para escolher qual a matriz de células você gostaria de gerar, da seguinte forma:

Digite 1 para Blinker.  
Digite 2 para Block.  
Digite 3 para Glider.  
Digite 4 para Gosper Glider Gun.  

Assim que você, usuário, escolher um número, o conjunto de celulas abrirá e rodará as impressões das execuções sequentes conforme as regras do jogo da vida, constante com o tempo de 0,2 segundos de diferença por impressão. Será possível verificar que as células vivas são os de caracteres ' * ' e as células mortas ' - '.

O jogo funciona de acordo com as regras:

1-Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.  
2-Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.  
3-Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.  
4-Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração.  

Por fim, assim que desejar executar novamente o jogo e testar outros conjuntos, caso ocorra erro na hora de copilar o código outra vez quando fizer o "make", é possível que seja necessário o comando "make clean" para limpar os objetos gerados anteriormente.
