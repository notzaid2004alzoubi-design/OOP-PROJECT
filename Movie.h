#pragma once
#include "CastMember.h"
#include "Date.h"
#include "ShootLocation.h"
#include <iostream>
using namespace std;

class Movie
{
private:
	string movieName;
	float rate;
	CastMember *Castmembers;
	ShootLocation* ShootLocations;
	int castMemebrsSize;
	int shootLocationsSize;
	Date ReleaseDate;
	int  *locationDays;
public:
	Movie();
	Movie(string name, float rating, Date d, CastMember* CS, ShootLocation* SL, int* LD, int castsize, int locationsize);
	~Movie() {
		if(castMemebrsSize!=0)
		delete[] Castmembers;

		if (shootLocationsSize != 0) {
			delete[] ShootLocations;
			delete[] locationDays;
		}
	}
	void SetMovieName(string);
	void setRate(float);
	void setcastmembers(CastMember arr[], int size);
	void setshootloc(ShootLocation arr[], int s);
    void setReleaseDate(Date);
	void setlocationdays(int arr[]);


	string GetMoviename();
	float Getrating();
	CastMember *getcastMembers();
	ShootLocation *getShootLocations();
	Date getRelDate();
	int* getlocdays();
	int getnumofCastMembers();
	int getnumofShootLocations();
	
	virtual int calculateBudget() = 0;
	void printDetails();



};

