// Rasha Mohamed 40315095
// Nadine Mazloum 40316810

//Invoice.cpp is where all the member functions, constructors, and destructors
// of class Invoice get defined
#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

//member functions

//definition of the get functions
string Invoice::get_partNum() {
    return partNum;
}

string Invoice::get_partDes() {
    return partDes;
}

int Invoice::get_itemQuant() const {
    return itemQuant;
}

int Invoice::get_itemPrice() const{
    return itemPrice;
}

//definition of the set functions for the string variables
void Invoice::set_partNum(string v){
    partNum = v;
}

void Invoice::set_partDes(string v){
    partDes = v;
}

// definition of the set function for the integer varaibles
// Needed to use an if and else statement to deal with negative
// quantity and price because that is not possible.
void Invoice::set_itemQuant(int v){
    if (v <= 0 ) {
        itemQuant = 0; // negatives become zeros
    } else {
        itemQuant = v;
    }
}

void Invoice::set_itemPrice(int v){
    if (v <= 0 ) { // negatives zeros
        itemPrice = 0;
    } else {
        itemPrice = v;
    }
}


// just return the product of itemQuant and itemPrice
int Invoice::getInvoiceAmount() const {
    return ((itemQuant)*(itemPrice));
}

//special functions
string Invoice::toString() const { // creating a list of all the data member info
return "partNum: " + partNum
    + " partDes: " + partDes
    + " itemQuant: " + to_string(itemQuant) // needed to use to_string to turn the
    + " itemPrice: " + to_string(itemPrice); // int of itemQuant and itemPrice into string
}

Invoice Invoice::clone(const Invoice& other) {

    Invoice objectCopy(other);
    return objectCopy;
}


//constructors
Invoice::Invoice():partNum(""), partDes(""), itemQuant(0), itemPrice(0) {
    // constructor initializes all data members using a member initializer list
    cout << "default constructor being invoked" << endl;
}

Invoice::Invoice( const Invoice& i):partNum( i.partNum),partDes(i.partDes),
   itemQuant( i.itemQuant), itemPrice(i.itemPrice){
    // constructor initializes all data members using a member initializer list
    cout << "copy constructor being invoked" << endl;
}



//destructor
// destructor called automatically when the object goes out of scope
Invoice::~Invoice(){
    cout << "The object has been destroyed" <<'\n';
}


