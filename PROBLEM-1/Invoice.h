// Rasha Mohamed 40315095
// Nadine Mazloum 40316810

#ifndef ASS_1_INVOICE_H
#define ASS_1_INVOICE_H

#endif //ASS_1_INVOICE_H

// So this is the .h file where we declare the class, all data members and member functions
#include <iostream>
#include <string>
using namespace std;

class Invoice {
private:
    //Here are the four private member variables
    string partNum; // This variable is defined in string for the part number
    string partDes; // This variable is defined in string for the part description
    int itemQuant; // This variable is defined in integer for the quantity of the item
    int itemPrice; // This variable is defined in integer for the price of the item

public:
    // here we define the member functions publicly

    // we have get and set functions for each of the private data members
    string get_partNum();
    void set_partNum(string);

    string get_partDes();
    void set_partDes(string);

    int get_itemQuant() const;
    void set_itemQuant(int);

    int get_itemPrice() const;
    void set_itemPrice(int);

    int getInvoiceAmount () const;

    // here are the two special functions

    string toString() const; // this is the toString function that is meant to return
                        // a string list of the info that each data member is holding

    Invoice clone(const Invoice& other); //this is the clone function that copies
                                        // the data member info for an object and creates
                                        // another object with that same exact info


    //constructors
    Invoice(); //this is the default constructor
    Invoice(const Invoice& i); //this is the copy constructor
    //destructor
    ~Invoice();

};