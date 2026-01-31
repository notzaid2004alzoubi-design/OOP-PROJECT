

#include <iostream>
using namespace std;
#include "Movie.h"
#include "Action.h"
#include "Sci_Fi.h"



int main()
{
    int numOfHeros = 7;
    string name = "Drive";
    float rate = 4.0;
    Date d(1,2,2012);
    int locationsize=3;
    int castsize=2;
    CastMember* CS = new CastMember[castsize];
    ShootLocation* SL = new ShootLocation[locationsize];
    int* LD = new int[locationsize];
    for (int i = 0; i < castsize; i++) {
        CS[i].setCastName("lll");
        CS[i].setCastNat("jprdan");
        CS[i].setCastSal(700);
    }
    for (int i = 0; i < locationsize; i++) {
        SL[i].setcost(40);
        SL[i].setLocCity("amman");
        SL[i].setLocName("ss");
        LD[i] = 1;
    }
    string brief_ = "aaa";
    string name1 = "zz";
    float rate1 = 2.0;
    Date d1(1, 2, 2022);
    Movie* movies[2];
    Action ob1( numOfHeros, name, rate, d, CS, SL,  LD,  castsize, locationsize);
    Sci_Fi ob2(0,  brief_,  name1,  rate1,  d1,  CS, SL, LD,  castsize, locationsize);
  //ob1.printDetails();

    *movies[0]=ob1;
    *movies[1] = ob2;
 
   delete[] movies;

}

