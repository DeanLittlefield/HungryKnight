# HungryKnight

## Table of contents

* [Introduction](#introduction)
* [The IDE Used](#the-ide-used)
* [Code Breakdown](#code-breakdown)
* [Boilerplate](#boilerplate)
* [Calling Int Main](calling-int-main)
* [Variables for Name and Characteristic](variables-for-name-and-characteristic)
* [Welcoming the Knight](welcoming-the-knight)
* [Food Menu](food-menu)
* [Variables for Food](variables-for-food)
* [Calculating the Cost](calculating-the-cost)
* [Results](results)
* [Final Comments](final-comments)
## Introduction 
The Hungry Knight program displays food options, along with prices for each item, to the user. The user then selects the items they want. The program will then calculate the total of the items. This is a very simple program and was the first program that i wrote in c++.

## The IDE Used
This project was created with:
* [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/)

## Code Breakdown
I will be explaining, to the best of my ability, what is going on in this program. Keep in mind that I have basic knowledge in cpp programing and do not claim to know everything. Thank you for your time and I wish you a blessed day.

### Boilerplate
Let's take a quick look at the boilerplate. When I say boilerplate I am refering to this section of code:
```cpp
#include<iostream>
using namespace std;
```
We use `#include<iostream>` to read and write to the standard input/output stream. Basically this will allow us to recieve input via keyboard from the user through `cin` statements, and it will also allow us to display data to the user through `cout` statements.

Next you should notice the `using namespace std;`. What this does is tell the compiler that symbol names defined in the std namespace are to be brought into your program's scope, so you can omit the namespace qualifier. Without this we would have to continually write `std::` before each `cout` and `cin` statement. Below I will show a quick example of what this looks like with and without `using namespace std;`. 
### Examples
#### With Namespace std
```cpp
cout << "Hello";
cin >> number;
```
#### Without Namespace std
```cpp
std::cout << "Hello"; 
std::cin >> number;
```
This is a very basic example, but by including `using namespace std;` it will save us from having to retype `std::`. This will be usefull especially in bigger programs.

## Calling Int Main
Lets talk about calling `int main()`.
```cpp
#include<iostream>
using namespace std;

int main()
{
  cout << "Hello"; 
}
```
When the above snippet runs it will first call for the function `int main`. Every program needs this function because it is the entry point of the program. What it runs in the snippet above is what is between the curlly brackets. In our case it will simply print out *Hello*.

## Variables for Name and Characteristic
In this program we will need to recieve a name from our user as well as a characteristic. Since we will be recieving a name/characteristic, we will need to store it in a variable of data type `string`. We can use the following:
```cpp
//Variables to hold our customers name and characteristic
	string name;
	string characteristic;
```
Once I have the varaibles initialized I can recieve and store the user's name and characteristic with two `cin` statements like the ones below.
```cpp
	cin >> name;
	cin >> characteristic;
```

## Welcoming the Knight
Next let's implement the two `cin` statements with `cout` statements. The reason for doing this is to tell the user what we want from them. The next blocks of code should look like this:
```cpp
//Welcome the knight and get his name and a characteristic
	
	cout << "Welcome to the Hungry Knight’s Inn and Tavern." <<endl; 
        cout << "Please give me your name then press 'Enter' and then give me a characteristic about you. An example would be Brave, Loyal,   Undying" <<endl;
	cin >> name;
	cin >> characteristic;
```
Now that we have recieved the information we wanted let's greet the person with the chosen name/characteristic in another `cout` statement. We should get something that looks like the following:
```cpp
	cout << "Hello "  << name << " the " << characteristic << endl;
```
## Food Menu
Next we need to display what is on the menu for the user to eat. We can simply do this with a few `cout` statements like so.
```cpp
	//Show a menu with prices
	cout << " Please take a look at our menu. Im sure you and your men are hungry. " << endl;
	cout << "Here is what we have on the menu Sir " << name << " the " << characteristic << endl;
	cout << "********************************" << endl;
	cout << "* Roast Pheasant Plate  $15.10 *" << endl;
	cout << "* Bowl Beef Stew        $ 3.49 *" << endl;
	cout << "* Loaf of Fine Bread    $ 5.17 *" << endl;
	cout << "* Sliced Fruit          $ 1.19.*" << endl; 
	cout << "********************************" << endl;
```
This should give a clear idea of what is available and how much it will cost.

## Variables for Food
Next we need to initialize variables for the amount of each item we are going to recieve. Let's go ahead and initialize the following variables:
```cpp
//Set variables for food
	float pheasant = 0;
	float beefStew = 0;
	float bread = 0;
	float fruit = 0;
```
We will initialize them as the data type `float` because later we will multiplying by dollar amounts. Making these variables a `float` type will help negate conflicting data types later when we multiply.
With this done it is time to ask the user the amount of each item they want. Again we can do this easily with `cout` and `cin` statements. I used the following:
```cpp
//Ask for amount of each dish
	cout << "How many Roast Pheasant plates would you like?" << endl;
	cin >> pheasant;
	cout << "How many bowls of beef stew would you like?" << endl;
	cin >> beefStew;
	cout << "How many loaves of bread would you like?" << endl;
	cin >> bread;
	cout << "How many pieces of sliced fruit would you like?" << endl;
	cin >> fruit;
```

## Calculating the Cost
With the user amounts captured in our variables let's start the neccessary calculations. 
```cpp
	//Calculate subtotal, tax total, and grand total 
	float subtotal = (pheasant * 15.10) + (beefStew * 3.49) + (bread * 5.17) + (fruit * 1.19);
	float taxTotal = (subtotal * 0.05);
	float grandTotal = (subtotal + taxTotal);
```
Here we can see that I initialized the following variables: `float subtotal`, `float taxTotal`, and `grandTotal`.

For the calculation of the `float subtotal` I simply multiplied the item amount, that we recieved earlier, by the designated price of the item. I then stored it in the variable `subTotal`

I then use `subtotal` in the calculation of the `taxTotal`. In my program the tax amount is 5%; so we can multiply `subtotal` by 0.05. I then store the calculated amount into `taxTotal`.

Finally we can get the `grandTotal` by adding `subtotal` and `taxTotal` together.

## Results
We need to tell the user the amounts that we just calculated to do this we can use `cout` statements.
```cpp
	//Tell our customer the subtotal, tax, and grand total
	cout << "Your subtotal is ---- $" << subtotal << endl;
	cout << "Tax ----------------- $" << taxTotal << endl;
	cout << "Your grand total is - $" << grandTotal << endl;
```
This will give us what we need and is the final part of the program

## Final Comments 
Thank you for your time and checking out this simple program.
