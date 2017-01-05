//
//  Traktor.hpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#ifndef Traktor_hpp 
const int maxIlUrz=3;
#define Traktor_hpp

#include <stdio.h>
#include <string>
#include <list>
#include "Pojazd.hpp"
#include "Urzadzenie.hpp"

using namespace std;
class Traktor : public Pojazd
{
    public:
        Traktor();
        Traktor(double pr);
        Traktor(double pr, Urzadzenie u);
    
        string getUrzadzenie();
        double getLimitTr();
    
        void setUrzadzenie(Urzadzenie ur);
        void setlimitTr(double lp);
    
        void addUrzadzenie(Urzadzenie ur);
        void minPr();
    
        string getPar();
    
    private:
   
        double limitTr; // predkosc jaka traktor moze jechac bez urzadzen
        Urzadzenie  listaUrz [maxIlUrz]; // tablica urzadzen przyczepionych do traktora makmylanie moga to byc 3
        int size;
    
    
};
#endif /* Traktor_hpp */
