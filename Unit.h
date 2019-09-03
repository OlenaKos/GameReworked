#pragma once
#include "Cell.h"
#include <map>

enum LandingType
{
	Navy,
	Land,
	Air
};

enum NavyType
{
	Carrier,
	UBoat,
	Fregat
};

enum LandType
{
	Infantry,
	Cavalry,
	Builder
};

template < bool isCivil,  typename LandingType >
class Unit
{
private:
	int health;
	int damage;
	Cell& cell;
	bool IsDefenced;

public:
	   LandingType LandingTypeValue;
	   bool isCivil;
	   Unit(int h, int ch, Cell& c, bool isCivil, LandingType lVal);
       virtual ~Unit() = 0;
	   void attack(Unit* unit);
	   int getHealth();
	   Cell::Landscape getCurrentLandscape();
	   bool getIsDefenced();
	   virtual std::map <Cell::Landscape, int> getAttackBonusMap() = 0;
	   virtual std::map <Cell::Landscape, int> getDefenceBonusMap() = 0;
	   int getAttackBonus();
	   int getDefenceBonus();
};



class UnitType