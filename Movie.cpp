#include <iostream>
using namespace std;
#include "Movie.h"

Movie:: Movie(){
		rate = 0;
		movieName = "";
		Castmembers = NULL;
		ShootLocations = NULL;
		locationDays = NULL;
		castMemebrsSize = 0;
		shootLocationsSize = 0;
		ReleaseDate;
}

Movie::Movie(string name, float rating, Date d, CastMember* CS, ShootLocation* SL, int* LD, int castsize, int locationsize) {
	
	movieName = name;
	rate = rating;
	ReleaseDate.setDay(d.getDay());
	ReleaseDate.setMonth(d.getMonth());
	ReleaseDate.setYear(d.getYear());

	castMemebrsSize = castsize;
	shootLocationsSize = locationsize;

	Castmembers = new CastMember[castMemebrsSize];
	ShootLocations = new ShootLocation[shootLocationsSize];
	locationDays = new int[shootLocationsSize];
	for (int i = 0; i < castMemebrsSize; i++)
	{
		Castmembers[i].setCastName(CS[i].getCastName());
		Castmembers[i].setCastNat(CS[i].getCastNat());
		Castmembers[i].setCastSal(CS[i].getCastSal());
	}
	for (int i = 0; i < shootLocationsSize; i++) {
		ShootLocations[i].setcost(SL[i].GetLocCost());
		ShootLocations[i].setLocCity(SL[i].GetLocCity());
		ShootLocations[i].setLocName(SL[i].GetLocName());
		
	}
	for (int i = 0; i < shootLocationsSize; i++) {
		locationDays[i] = LD[i];
	}
}


void Movie::SetMovieName(string n) { movieName = n; }
void Movie:: setRate(float m) { rate = m; }

void Movie::setcastmembers(CastMember arr[], int size) {
	if (Castmembers  != NULL) {
		delete[] Castmembers;
		castMemebrsSize = 0;
	}
	else {
		castMemebrsSize = size;
		Castmembers = new CastMember[castMemebrsSize];
		for (int i = 0; i < castMemebrsSize; i++) {
			Castmembers[i].setCastName(arr[i].getCastName());
			Castmembers[i].setCastNat(arr[i].getCastNat());
			Castmembers[i].setCastSal(arr[i].getCastSal());
		}
	}
}

void Movie::setshootloc(ShootLocation arr[], int size) {
	if (ShootLocations != NULL) {
		delete[] ShootLocations;
		shootLocationsSize = 0;
	}
	else {
		shootLocationsSize = size;
		ShootLocations = new ShootLocation[shootLocationsSize];
		for (int i = 0; i < shootLocationsSize; i++) {
			ShootLocations[i].setcost(arr[i].GetLocCost());
			ShootLocations[i].setLocCity(arr[i].GetLocCity());
			ShootLocations[i].setLocName(arr[i].GetLocName());
		}
		
	}
}

void Movie::setReleaseDate(Date d) {
	ReleaseDate.setDay(d.getDay());
	ReleaseDate.setMonth(d.getMonth());
	ReleaseDate.setYear(d.getYear());
}
void Movie::setlocationdays(int arr[]) {
	if (locationDays != NULL) {
		delete[] locationDays;
	}
	else {
		locationDays = new int[shootLocationsSize];
		for (int i = 0; i < shootLocationsSize; i++)
			locationDays[i] = arr[i];
	}
}


string Movie::GetMoviename() { return movieName; }
float Movie::Getrating() { return rate; }
CastMember* Movie::getcastMembers() { return this->Castmembers; }
ShootLocation* Movie::getShootLocations() { return this->ShootLocations; }
Date Movie::getRelDate() { return ReleaseDate; }
int* Movie::getlocdays() { return this->locationDays; }
int Movie:: getnumofCastMembers() { return castMemebrsSize; }
int Movie::getnumofShootLocations() { return shootLocationsSize; }


void Movie::printDetails() {

	cout << "\nMovie's name:\n" << movieName << endl;
	cout << "Movie's rating:\n" << rate << endl;
	cout << "Movie's release date:\n";
	ReleaseDate.printDetails();
	cout << "Movie's Cast members:";
	for (int i = 0; i < castMemebrsSize; i++)
		Castmembers[i].printDeatils();

	cout << "Movie's shoot locations:\n";
	for (int i = 0; i < shootLocationsSize; i++) {
		ShootLocations[i].printDeatils();
		cout << "Days of shooting: "<<locationDays[i];
	}
}