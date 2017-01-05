//
//  Droga.cpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include "Droga.hpp"
Droga::Droga(double limit)
{
   
    setOgraniczenie(limit);

}
Droga Droga::operator+(Pojazd* p)
{
    listaPojazdow.push_back(p);
    return *this;
}
double Droga::rzeczywistaPredkosc()
{
    double min=ograniczenie;
    double predkoscPojazdu;
    list<Pojazd*>::iterator it;
    for(it = listaPojazdow.begin(); it != listaPojazdow.end(); ++it)
    {
        predkoscPojazdu = (**it).getPredkosc();
        if(predkoscPojazdu < min)
            min = predkoscPojazdu;
    }
    
    return min;
}
double Droga::getOgraniczenie()
{
    return ograniczenie;
}

void Droga::setOgraniczenie(double ogr)
{
    ograniczenie = ogr;
}
std::ostream& operator<< (std::ostream &wyjscie,Droga & d)
{
    
    wyjscie<<"Ograniczenie na drodze: "<<d.getOgraniczenie()<< " a rzeczywista predkosc: "<<d.rzeczywistaPredkosc();
    wyjscie << "\nNa drodze znajduja sie nastepujace pojazdy:\n\n";
    list<Pojazd*>::iterator it;
    for(it = d.listaPojazdow.begin(); it != d.listaPojazdow.end(); ++it)
    {
        wyjscie << (**it).getPar();
        wyjscie << "\n\n";
    }
    wyjscie<<"\n";
    return wyjscie;
}

    

