#ifndef CHARACTER_H_
#define CHARACTER_H_

class character{

public:
	std::string getCharacterName();
	int getCharacterStrength();
	int getCharacterVitality();
	int getCharacterAgility();
	int getCharacterIntellect();



private:
	std::string name;
	int strength;
	int vitality;
	int agility;
	int intellect;

}
#endif /*CHARACTER_H_ */