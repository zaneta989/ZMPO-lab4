//
//  Urzadzenie.cpp
//  lab4
//
//  Created by Żaneta Larwa on 22.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include "Urzadzenie.hpp"

Urzadzenie::Urzadzenie()
{
    setNazwa("Nie wiadomo co to za urzadzenie");
    setPredkosc(30);
}

Urzadzenie::Urzadzenie(int pr, string n)
{
    setNazwa(n);
    setPredkosc(pr);
}
string Urzadzenie::getNazwa()
{
    return nazwa;
}

void Urzadzenie::setNazwa(string n)
{
    nazwa = n;
}
string Urzadzenie::getPar()
{
    return getNazwa()+ ", ktora maksymalnie mozna jechac: "+std::to_string(getPredkosc())+" km/h";
}

