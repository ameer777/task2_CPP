# include <iostream>
# include <string>
#include "snowman.hpp"
#include <stdexcept>
using namespace std;
using namespace ariel;

int main(){

    cout << ariel::snowman(13114411) << endl;
    /*should print :
    _===_
    (._.)
    ( : )
    ( : )
    */

   cout << ariel::snowman(11114411) << endl;
   /*should print :
    _===_
    (.,.)
    ( : )
    ( : )
    */

   cout << ariel::snowman(41111111) << endl;
   /*should print :
    ___
    (_*_)
    (.,.)
   <( : )>
    ( : )
    */

   try {
		cout << ariel::snowman(6) << endl; 
	} catch (exception& ex) {
	 	cout << "  caught exception: " << ex.what() << endl;  // should print "Invalid code '6'"
	}
}
