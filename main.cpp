//
//  main.cpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include <iostream>
#include "Droga.hpp"
int main(int argc, const char * argv[]) {
    Droga d = Droga(110);
    Traktor t(34,Urzadzenie(13,"Kosa"));
    d+new Traktor(40.5,Urzadzenie(24,"Przyczepa"));
    d+new Ciezarowka(80,10);
    d+new Traktor();
    d+new Ciezarowka(100,10);
    t.addUrzadzenie(Urzadzenie(10,"Przyczepa"));
    d+new Ciezarowka(70,10);
    d+&t;
    d+new Traktor(20);
    d+new Ciezarowka();
    std::cout<<d;
    
}
