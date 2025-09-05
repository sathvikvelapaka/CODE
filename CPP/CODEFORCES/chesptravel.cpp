#include<iostream>
using namespace std;
int main()
{
    int totalrides;
    int specialticketrange;
    int oneridecost;
    int specialticketcost;
    cin>>totalrides>>specialticketrange>>oneridecost>>specialticketcost;

    //only 1ticket price
    int onlysingleticket=totalrides*oneridecost;
    //using special ticket;
   int  no_of_sptickets=totalrides/specialticketrange;
    int remaining=totalrides%specialticketrange;

    


}