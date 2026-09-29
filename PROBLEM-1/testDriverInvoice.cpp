// Rasha Mohamed 40315095
// Nadine Mazloum 40316810

#include <iostream>
#include <string>
#include "Invoice.h"
#include "testHarnessInvoice.h"
using namespace std;

void testInvoice() {
    Invoice i; // object i created; testing all the get member functions
    check("test get_partNum of class Invoice",i.get_partNum(), "");
    check("test get_partDes of class Invoice",i.get_partDes(), "");
    check("test get_itemQuant of class Invoice",to_string(i.get_itemQuant()), "0");
    check("test get_itemPrice of class Invoice",to_string(i.get_itemPrice()), "0");

    // calling the set functions, changing the stored info in the data members,
    // and testing if the actual and expected infos match
    i.set_partNum("J3Y7G8");
    check("test set_partNum of class Invoice", i.get_partNum(), "J3Y7G8");
    i.set_partDes("J3Y7G8");
    check("test set_partDes of class Invoice", i.get_partDes(), "J3Y7G8");
    i.set_itemQuant(-1); // not only checking if the set function worked
                        // also checking if the negatives were in fact dealt with
    check ("test set_itemQuant of class Invoice", to_string(i.get_itemQuant()), "0");
    i.set_itemPrice(-1); // not only checking if the set function worked
                        // also checking if the negatives were in fact dealt with
    check ("test set_itemPrice of class Invoice", to_string(i.get_itemPrice()), "0");

    i.set_itemQuant(3);
    i.set_itemPrice(4); // using the set functions to change itemQuant and itemPrice and checking if the
                        // function getInvoiceAmount truly does return their product
    check("test getInvoiceAmount of class Invoice",
        to_string(i.getInvoiceAmount()), "12");


    check("test toString of class Invoice",
        i.toString(), //checking if the toString function works
        "partNum: J3Y7G8 partDes: J3Y7G8 itemQuant: 3 itemPrice: 4");


    Invoice c = i.clone(i); //calling function clone from object i and creating a new object that is an exact copy
    check("test clone of class Invoice", // using the toString function to check if the clone function worked
        c.toString(), i.toString()); // if the clone function worked then the toString function would
                                                    // return the same list


}

// int main extrapolated from class notes
int main(){
    testInvoice(); //calling testInvoice function
    cout << "\n"
    << (testsRun - testsFailed) << " / " << testsRun
    << " tests passed\n";
}