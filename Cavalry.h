//#pragma once
//
//#include<map>
//#include<string>
//#include "Cell.h"
//#include "LandUnit.h"
//#include "MilitaryUnit.h"
//
//class Cavalry : public LandUnit, public MilitaryUnit
//{
//private:
//	static std::map <Cell::Landscape, int> AttackBonusMap;
//	static std::map <Cell::Landscape, int> DefenceBonusMap;
//
//public:
//	 Cavalry(int h, int ch, Cell& c);
//     virtual ~Cavalry();
//	 virtual std::map<Cell::Landscape, int> getAttackBonusMap();
//	 virtual std::map<Cell::Landscape, int> getDefenceBonusMap();
//};