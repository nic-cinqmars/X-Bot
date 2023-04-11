#include "X212.h"

X212::X212(const X212& x212)
{
	Compteur::ajouterConstructeurCopie();

	nom = x212.nom;
	direction = x212.direction;
	force = x212.force;
	vitesse = x212.vitesse;
	vision = x212.vision;
}

void X212::mouvement(int& x, int& y)
{
	switch (direction)
	{
	case 0:
		y += (vitesse + 1);
		break;
	case 1:
		x += (vitesse + 1);
		break;
	case 2:
		y -= (vitesse + 1);
		break;
	case 3:
		x -= (vitesse + 1);
		break;
	}
}

void X212::superCourse(int& x, int& y)
{
}

void X212::esquive(int& x, int& y, int xDanger, int yDanger)
{
}
