//
//  Pojazd.hpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#ifndef Pojazd_hpp
#define Pojazd_hpp
#include <string>
#include <stdio.h>

using namespace std;
class Pojazd
{
    
    public :
        Pojazd();
        Pojazd (double pr);
        double getPredkosc();
        void setPredkosc(double pr);
    
        virtual string getPar()=0;
    
    private:
        double predkosc;
    
};

#endif /* Pojazd_hpp */
