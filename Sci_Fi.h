#pragma once
#include<iostream>
using namespace std;
#include "Movie.h"
class Sci_Fi: public Movie
{
	private:
		bool  fromAbook_;
		string brief_;
	    int const additionalCost_;
   public:
	   Sci_Fi():Movie(),additionalCost_(90000) {
		   fromAbook_ = false;
		   brief_ = "";

	   }
	   Sci_Fi(bool fromAbook , string brief_ , string name, float rate, Date d, CastMember* CS, ShootLocation* SL, int* LD, int castsize, int locationsize)
		   :additionalCost_(90000), Movie(name, rate, d, CS, SL, LD, castsize, locationsize) {
	       brief_ = this-> brief_;
		   fromAbook_ = fromAbook;
		   
	   }
	   void printDetails() {
		  
		   if (fromAbook_) {
			   cout<<" Sci-Fi movie is from a book\n";
		   }else{ cout << " Sci-Fi movie is not from a book\n"; }

		   cout << "Describtion of sci-fi movie:\n" << brief_ << endl;
		   cout << "Additional cost:\n" << additionalCost_ << endl;
		   Movie::printDetails();

		   
	   }

	   int calculateBudget() {
		   int budget = 0;
		   budget += additionalCost_;
		 
		   CastMember* arr;
		   arr = new CastMember[getnumofCastMembers()];
		   arr = getcastMembers();
		   for (int i = 0; i < getnumofCastMembers(); i++) {
			   budget +=arr[i].getCastSal();

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
	  

};

