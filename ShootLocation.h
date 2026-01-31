#pragma once
#include <iostream>
using namespace std;
class ShootLocation
{

private:
	string locationName;
	string locationCity;
	int locationCostPerDay;
public:
	ShootLocation(string s1="", string s2="", int n=0) {
		locationName = s1;
		locationCity = s2;
		locationCostPerDay = n;

	}
	ShootLocation(const ShootLocation& m) {
		locationName = m.locationName;
		locationCity = m.locationCity;
		locationCostPerDay = m.locationCostPerDay;
	}
	~ShootLocation(){}
	void setLocName(string s) { locationName = s; }
	void setLocCity(string s) {	locationCity = s;}
	void setcost(int n) {	locationCostPerDay = n;	}


	string GetLocName() {	return locationName;	}
	string GetLocCity() {	return locationCity;	}
	int GetLocCost() { return locationCostPerDay; }

	void printDeatils() {
		cout << "\nShoot Location's Name:\n" << locationName << endl;
		cout << " Shoot location's city name:\n"<< locationName << endl;
		cout << "Shoot location's cost per day:\n" << locationCostPerDay << endl;
		
	}


};

