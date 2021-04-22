#define _CRT_SECURE_NO_WARNINGS
#include <cstdio> 
#include <cstring>
#include <cstdlib>
#include <ctime>


class FantasyUnit {
public:
	int maxHp;
	int atk;
	int range;
	int movementSpeed;


	FantasyUnit(int maxHp, int atk, int range, int movementSpeed) {
		this->maxHp = maxHp;
		this->atk = atk;
		this->range = range;
		this->movementSpeed = movementSpeed;
	}

	char name[50];


	void PringInof() {
		printf("%s의 능력\n", name);
		printf("최대 체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n\n\n", movementSpeed);
	}
};


class Goblin : public FantasyUnit {
public:
	Goblin() : FantasyUnit(10,5,10,10){
		//maxHp = 10;
		//atk = 5;
		//range = 10;
		//movementSpeed = 10;

		strcpy(name, "고블린");
	}
};

class SkeletonArcher : public FantasyUnit {
public:
	SkeletonArcher() : FantasyUnit(60,20,50,3) {
		//maxHp = 60;
		//atk = 20;
		//range = 50;
		//movementSpeed = 3;

		strcpy(name, "해골궁수");
	}
};

class Orc : public FantasyUnit {
public:
	Orc() : FantasyUnit(80,10,12,8){
		/*maxHp = 80;
		atk = 10;
		range = 12;
		movementSpeed = 8;*/

		strcpy(name, "오크");
	}
};

class Slime : public FantasyUnit {
public:
	Slime() : FantasyUnit(100,5,3,2){
		/*maxHp = 100;
		atk = 5;
		range = 3;
		movementSpeed = 2;*/

		strcpy(name, "슬라임");
	}
};