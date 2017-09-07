#include <iostream>
#include "block.hpp"

Block::Block(){
    setTamanho(10);
    setMp ('*',1,2);
    setMp ('*',1,3);
    setMp ('*',2,2);
    setMp ('*',2,3);
    setGeracao (10);

}

Block::~Block(){}
