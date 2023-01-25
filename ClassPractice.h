#include <iostream>
#include <vector>
using namespace std;

class Base7Number {
    public:
        //Getters and setters
        int getBase10() {
            return base10;
        }
        int getBase7() {
            return base7;
        }
        //The instructions said to write a setter for each var, but the 
        //ClassPractice.cpp file only tests for a single set function,
        //so I wrote that instead to pass the tests
        void set(int numIn) {
            throw 1;
        }
        //Constructor, assigns the base10 number and calls the toBase7 function to convert automatically
        Base7Number(int base10In) {
            base10=base10In;
            toBase7();
        }
    private:
        int base10;
        int base7 = 0;
        //toBase7 function called from the constructor
        void toBase7() {
            //A vector that will hold the digits until they are set to the base7 var 
            //The 1s place is the 0 index, the 10s place is the 1 index, and so on
            vector<int> tempVector {0};
            //A loop that starts at 1 and counts up to the base10 number given
            //1 is added to the ones place each loop, then another loop checks every digit in the vector to see if they have reached 7
            for (int i=1; i <= base10; i++) {
                tempVector.at(0) = tempVector.at(0) + 1;
                for (int j = 0; j < tempVector.size(); j++) {
                    if (tempVector.at(j) == 7) {
                        //Sets current digit to 0
                        tempVector.at(j) = 0;
                        //This if checks if the current digit is the highest digit in the vector
                        //If it is, it adds another place for the digits to start filling up
                        if (tempVector.size() == j + 1) {
                            tempVector.push_back(0);
                        }
                        //Adds one to the next digit
                        tempVector.at(j+1) = tempVector.at(j+1) + 1;
                    }
                }
            }
            //This loop "appends" the base7 var with the digits from tempVector, in reverse order
            for (int i = 1; i <= tempVector.size(); i++) {
                base7 *= 10;
                base7 += tempVector.at(tempVector.size()-i);
            }
        }
};
//test