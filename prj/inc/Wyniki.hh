#ifndef WYNIKI_HH
#define WYNIKI_HH

#include <iostream>
#include "IObserwator.hh"
#include "Czasomierz.hh"
#include <fstream>
#include <cstdlib>
#include <string>
////////////////////////////////DEFINICJA KLASY///////////////////////////////////
class Wyniki: public IObserwator
{
private:
//**************************************************************************
  unsigned int _IloscProb;
//**************************************************************************
  unsigned int _IloscPowtorzen;
//**************************************************************************
  unsigned int * _TablicaRozmiarow; 
//**************************************************************************
  long double* _TablicaWynikow;
//**************************************************************************
  Czasomierz Stoper;
//**************************************************************************

public:

//**************************************************************************
  Wyniki(const unsigned int Powtorzen,const unsigned int Proby,
	 unsigned int *Rozmiary);
//**************************************************************************
  ~Wyniki();
//**************************************************************************
  void _ZapiszWyniki(std::string PlikWy) const;
//**************************************************************************
  void _Aktualizuj();
//**************************************************************************
};

#endif
