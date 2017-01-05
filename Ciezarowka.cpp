//
//  Ciezarowka.cpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include "Ciezarowka.hpp"
void Ciezarowka::setPojemnosc(double p)
{
    pojemnosc=p;
}
double Ciezarowka::getPojemnosc()
{
    return pojemnosc;
}
string Ciezarowka::getPar()
{
    string par ="Ciezarowka o maksymalnej predkosc : "+std::to_string(getPredkosc())+" km/h .";;
    if (getPojemnosc()!=0) par+="Pojemnosc ciezarowki: "+std::to_string(getPojemnosc())+" t. ";
    
    return par;
    
}
