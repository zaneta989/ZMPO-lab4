//
//  Droga.hpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#ifndef Droga_hpp
#define Droga_hpp

#include <stdio.h>
#include <iostream>

#include "Pojazd.hpp"
#include "Traktor.hpp"
#include "Ciezarowka.hpp"

class Droga
{
        public :
                Droga(double limit);
        
                Droga operator + (Pojazd* p);
                friend std::ostream& operator<< (std::ostream&,Droga &);
        
                double getOgraniczenie();
                void setOgraniczenie(double);
        
                double rzeczywistaPredkosc();
        

        private:
                double ograniczenie;
                list<Pojazd*> listaPojazdow;
        
};


#endif /* Droga_hpp */
