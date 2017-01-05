//
//  Urzadzenie.hpp
//  lab4
//
//  Created by Żaneta Larwa on 22.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#ifndef Urzadzenie_hpp
#define Urzadzenie_hpp

#include <stdio.h>
#include "Pojazd.hpp"
using namespace std;

class Urzadzenie : public Pojazd
{
    public:
    
        Urzadzenie();
        Urzadzenie(int pr, string n);
        string getNazwa();
        void setNazwa(string n);
    
        string getPar();
    

    
    private:
        string nazwa;
};
#endif /* Urzadzenie_hpp */
