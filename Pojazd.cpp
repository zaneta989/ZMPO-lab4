//
//  Pojazd.cpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include "Pojazd.hpp"
Pojazd::Pojazd()
{
    setPredkosc(90);
   
}
Pojazd::Pojazd(double pr)
{
   setPredkosc(pr);
}
double Pojazd::getPredkosc()
{
    return predkosc;
}
void Pojazd::setPredkosc(double pr)
{
    predkosc=pr;
}
/*string Pojazd::getPar()
{
    string par = "Maksymalna predkosc pojazdu";
    par+= std::to_string(getPredkosc())+" km/h .";;
    return par;
}*/


