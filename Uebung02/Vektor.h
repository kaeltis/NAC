#include "Matrix.h"

#ifndef __VEKTOR_H__
#define __VEKTOR_H__

class Vektor :
	public Matrix
{
public:
	Vektor(int);
	void subtrahieren(Vektor);
	float betrag();
	float skalarprodukt(Vektor);
	double winkel(Vektor);
};
#endif