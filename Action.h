#pragma once
#include "Movie.h"
#include <iostream>
using namespace std;
      class Action : public Movie{

      private:
	  int numberOfHeros_;
	  int const additionalCost_;
      static float bestRated_;
    public:
		
Action(int numOfHeros, string name, float rate, Date d, CastMember* CS, ShootLocation* SL, int* LD, int castsize, int locationsize):
	Movie( name, rate, d, CS,SL, LD, castsize, locationsize), additionalCost_(70000), numberOfHeros_(numOfHeros){}



	void setnumOfHeros(int x) {
		numberOfHeros_ = x;
	}
	int getnumOfHeros() { return numberOfHeros_; }

	void printDetails() {
		Movie::printDetails();
		cout << "Number of heros:  " << numberOfHeros_ << endl;
		cout << "Additional cost : " << additionalCost_ << endl;

	}

	int calculateBudget() {
		int budget = 0;
		budget += additionalCost_;

		CastMember* arr;
		arr = new CastMember[getnumofCastMembers()];
		arr = getcastMembers();
		for (int i = 0; i < getnumofCastMembers(); i++) {
			budget += arr[i].getCastSal();

		}
		ShootLocation* arr2;
		arr2 = new ShootLocation[getnumofShootLocations()];
		arr2 = getShootLocations();
		int* arr3;
		arr3 = new int[getnumofShootLocations()];
		arr3 = getlocdays();

		for (int i = 0; i < getnumofCastMembers(); i++) {
			budget += (arr2[i].GetLocCost() * arr3[i]);
		}
		delete[] arr;
		delete[] arr2;
		delete[] arr3;


		return budget;
	}

	void shuffle(Action* arr[], int size) {
		for (int i = 0; i < size; i++) {
			
			
			for (int j = 0; j < arr[i]->getnumofCastMembers(); j++) {
				int randIndex = rand() % (arr[i]->getnumofCastMembers());
				CastMember temp;
				temp = *arr[randIndex]->getcastMembers();
			*arr[randIndex]->getcastMembers() =*arr[i]->getcastMembers();
			*arr[i]->getcastMembers() = temp;

			}

			for (int x = 0; x < arr[i]->getnumofShootLocations(); i++) {

				int randomindex = rand() % (arr[i]->getnumofShootLocations());
				ShootLocation temp2 = *arr[randomindex]->getShootLocations();
				*arr[randomindex]->getShootLocations() = *arr[i]->getShootLocations();
				*arr[i]->getShootLocations() = temp2;

				int temp3 = *arr[randomindex]->getlocdays();
				*arr[randomindex]->getlocdays() = *arr[i]->getlocdays();
				*arr[i]->getlocdays() = temp3;
			}
			}
			
		}

	
};

