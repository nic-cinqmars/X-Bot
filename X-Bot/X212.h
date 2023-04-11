#pragma once
#include <string>
#include "Compteur.h"

class X212
{
	std::string nom;
	int direction;
	int force;
	int vitesse;
	int vision;
	
public:
	X212() : nom("X212"), direction(0), force(2), vitesse(1), vision(0) { Compteur::ajouterConstructeur(); }

	X212(const X212& x212);

	~X212() { Compteur::ajouterDestructeur(); }

	int bloquer() const { return vitesse / 3 + force; }

	void mouvement(int& x, int& y);

	void superCourse(int& x, int& y);

	void esquive(int& x, int& y, int xDanger, int yDanger);

	std::string getNom() const { return nom; }
	void setNom(std::string nom) { this->nom = nom; }

	int getDirection() const { return direction; }
	void setDirection(int direction) { this->direction = direction; }

	int getVitesse() const { return vitesse; }
	void setVitesse(int vitesse) { this->vitesse = vitesse; }

	int getVision() const { return vision; }
	void setVision(int vision) { this->vision = vision; }
};

