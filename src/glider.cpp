#include <iostream>
#include "glider.hpp"

Glider::Glider(){
    setTamanho (20);
    setMp('*',1,2);
    setMp('*',2,3);
    setMp('*',3,1);
    setMp('*',3,2);
    setMp('*',3,3);
    setGeracao (50);
}

Glider::~Glider(){}
