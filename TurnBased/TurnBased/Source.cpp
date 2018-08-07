#include <iostream>
using namespace std;
#include <ctime>
#include <string>
class MONSTER {
public:
	void INITMONSTER(int hp, string name, int atk, int def, int spd);
	bool DEAD(bool live);
	int EXPRETURN(int exp);
	void CREATEMONSTER(int randhp, string randname, int randatk, int randdef, int randspd);
	;
private:
	int HP;
	string NAME;
	int ATK;
	int DEF;
	int SPD;
	bool LIVE;
	int EXP;

	;
};
void SummonMonster(int randnum);
void Help();
int main() {
	int PlayerHP = 5000;
	string PlayerNAME = "Hero";
	int PlayerATK = 2000;
	int PlayerDEF = 2000;
	int PlayerSPD = 3000;
	int PlayerEXP = 0;
	string action;
	cout << "Welcome to Battle Training!" << endl;
	cout << "This will cover Turn-based Text battle systems." << endl;
	cout << "Be prepared to start!" << endl;
	cout << "Type \"Help\" to see the command list." << endl;
	


}
void SummonMonster(int randnum) {

};
void Help() {
	cout << "Use Help to view Help menu." << endl;
	cout << "Use Item to view inventory." << endl;
	cout << "Use Attack to damage enemy." << endl;
	cout << "Use Defend to reduce damage." << endl;
	cout << "Use Scan to see enemy statistics." << endl;
	cout << "Use an item's name to use item." << endl;
};

void MONSTER::INITMONSTER(int hp, string name, int atk, int def, int spd) {
	hp == HP;
	name == NAME;
	atk == ATK;
	def == DEF;
	spd == SPD;
};
bool MONSTER::DEAD(bool live) {
	live == LIVE;
};
int MONSTER::EXPRETURN(int exp) {
	exp == EXP
};
void MONSTER::CREATEMONSTER(int randhp, string randname, int randatk, int randdef, int randspd) {

};