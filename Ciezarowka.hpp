//
//  Ciezarowka.hpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#ifndef Ciezarowka_hpp
#define Ciezarowka_hpp

#include <stdio.h>
#include <string>
#include "Pojazd.hpp"

class Ciezarowka : public Pojazd
{
    public :
        Ciezarowka() : Pojazd() {setPojemnosc(0);};
        Ciezarowka(double pr, double p):Pojazd(pr){ setPojemnosc(p);};
    
        void setPojemnosc(double p);
        double getPojemnosc();
    
        string getPar();
    
    private:
        double pojemnosc;
    
    
};
#endif /* Ciezarowka_hpp */
