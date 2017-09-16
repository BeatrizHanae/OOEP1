#include <iostream>
#include "blinker.hpp"

Blinker::Blinker(){
    setTamanho(40);
    setCampo ('*',1,2);
    setCampo ('*',2,2);
    setCampo ('*',3,2);
    setGeracao (50);

}
