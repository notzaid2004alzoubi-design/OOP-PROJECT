#pragma once

#include <iostream>
using namespace  std;
class CastMember
{
private:
	string castName;
	string castNationality;
	int castSalary;
public: 
	CastMember() {
		castName = "";
		castNationality = "";
		castSalary = 0;
	}
	CastMember(const CastMember &m) {
		castName = m.castName;
		castNationality = m.castNationality;
		castSalary = m.castSalary;
	}
	~CastMember(){}
	void setCastName(string s) { castName = s; }
	void setCastNat(string s) { castNationality = s; }
	void setCastSal(int n) { castSalary = n; }

	string getCastName() { return castName; }
	string getCastNat() { return castNationality; }
	int getCastSal() { return castSalary; }
	
	void printDeatils() {
		cout << " \nCast's name:\n" << castName << endl;
		cout << " Cast's nationality:\n" << castNationality << endl;
		cout << "Cast's salary:\n" << castSalary << endl;
		cout << endl;
	}
};

