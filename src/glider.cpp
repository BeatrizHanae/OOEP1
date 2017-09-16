#include <iostream>
#include "glider.hpp"

Glider::Glider(){
    setTamanho (20);
    setCampo('*',1,2);
    setCampo('*',2,3);
    setCampo('*',3,1);
    setCampo('*',3,2);
    setCampo('*',3,3);
    setGeracao (50);
}
