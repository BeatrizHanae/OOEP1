#include <iostream>
#include "bliker.hpp"

Blinker::Blinker(){
    setTamanho(40);
    setMp ('*',1,2);
    setMp ('*',2,2);
    setMp ('*',3,2);
    setGeracao (50);

}

Blinker::~Blinker (){}
