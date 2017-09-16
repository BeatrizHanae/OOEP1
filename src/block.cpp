#include <iostream>
#include "block.hpp"

Block::Block(){
    setTamanho(10);
    setCampo ('*',1,2);
    setCampo ('*',1,3);
    setCampo ('*',2,2);
    setCampo ('*',2,3);
    setGeracao (10);

}
