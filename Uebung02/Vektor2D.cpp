#include "Vektor2D.h"
#include <iostream>

Vektor2D::Vektor2D()
	:Vektor(2)
{
}

Vektor2D::Vektor2D(float element1, float element2)
	: Vektor(2)
{
	m_Element[0] = element1;
	m_Element[1] = element2;
}

void Vektor2D::addiere(Vektor2D vektor)
{
	m_Element[0] += vektor.m_Element[0];
	m_Element[1] += vektor.m_Element[1];
}

void Vektor2D::kopiereIn(Vektor2D* ziel)
{
	for (int i = 0; i < ziel->m_Zeilen * ziel->m_Spalten; i++)
	{
		ziel->m_Element[i] = m_Element[i];
	}
}

void Vektor2D::ausgabe(bool endline)
{
	std::cout << "Vektor2D: ";
	Matrix::ausgabe(false);
	std::cout << std::endl;
}

void tausche(Vektor2D* vektor1, Vektor2D* vektor2)
{
	Vektor2D* temp = new Vektor2D;
	vektor1->kopiereIn(temp);
	vektor2->kopiereIn(vektor1);
	temp->kopiereIn(vektor2);
	delete temp;
}