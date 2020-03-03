//Stephen Dean Littlefield, CS-231-002, The Hungry Knight. This program simply recieves input from
//the user and calculates a total price for items chosen.

#include <iostream>
using namespace std;

int main()
{
	//Variables to hold our customers name and characteristic
	string name;
	string characteristic;
	
	//Welcome the knight and get his name and a characteristic
	
	cout << "Welcome to the Hungry Knight’s Inn and Tavern." <<endl; 
    cout << "Please give me your name then press 'Enter' and then give me a characteristic about you. An example would be Brave, Loyal, Undying" <<endl;
	cin >> name;
	cin >> characteristic; 
	cout << "Hello "  << name << " the " << characteristic << endl;

	
	//Show a menu with prices
	cout << " Please take a look at our menu. Im sure you and your men are hungry. " << endl;
	cout << "Here is what we have on the menu Sir " << name << " the " << characteristic << endl;
	cout << "********************************" << endl;
	cout << "* Roast Pheasant Plate  $15.10 *" << endl;
	cout << "* Bowl Beef Stew        $ 3.49 *" << endl;
	cout << "* Loaf of Fine Bread    $ 5.17 *" << endl;
	cout << "* Sliced Fruit          $ 1.19.*" << endl; 
	cout << "********************************" << endl;
	
	//Set variables for food
	float pheasant = 0;
	float beefStew = 0;
	float bread = 0;
	float fruit = 0;
	
	//Ask for amount of each dish
	cout << "How many Roast Pheasant plates would you like?" << endl;
	cin >> pheasant;
	cout << "How many bowls of beef stew would you like?" << endl;
	cin >> beefStew;
	cout << "How many loaves of bread would you like?" << endl;
	cin >> bread;
	cout << "How many pieces of sliced fruit would you like?" << endl;
	cin >> fruit;
	
	//Calculate subtotal and grand total 
	float subtotal = (pheasant * 15.10) + (beefStew * 3.49) + (bread * 5.17) + (fruit * 1.19);
	float taxTotal = (subtotal * 0.05);
	float grandTotal = (subtotal + taxTotal);
	
	//Tell our customer the subtotal, tax, and grand total
	cout << "Your subtotal is ---- $" << subtotal << endl;
	cout << "Tax ----------------- $" << taxTotal << endl;
	cout << "Your grand total is - $" << grandTotal << endl;
	
}


