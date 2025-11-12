#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor {
    string visitorName;
    int ticketsBought;
public:
    Visitor();
    Visitor(string visitorName, int ticketsBought);
    ~Visitor();
    void displayInfo();
    int getTicketsBought();
    void addTicketBought();
};

#endif
