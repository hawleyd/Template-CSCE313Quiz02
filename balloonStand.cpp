#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>
#include <string.h>
#include <time.h>
#include <stdlib.h>

using namespace std;



int main (int argc, char* argv[])
{
    const int MAX_SELLERS = 1000;
    int numberOfSellersToday=0;
    int options;
    int totalSales = 0;
    char* argument;
    
    //handle input parameters

    if (argc !=3)
    {
        printf ("Usage: %s -s sales: G | [A] | S\n", argv[0]);
    }
    else
    {
        while ((options = getopt(argc, argv, "s:")) != -1) {
            switch (options) {
                case 's':
                    argument = optarg;
                    break;
                }
        }

        //get/set random values
        if (strcmp(argument, "G") ==0)
        {
            cout << "It was a good day." << endl;

        }
        else if (strcmp(argument, "S") ==0)
        {
            cout <<"It was a slow day." << endl;

        }
        else
        {
            cout << "It was an average day." << endl;

        }
        cout << numberOfSellersToday << " sellers today." << endl;

        //handle too many sellers

        if(numberOfSellersToday > MAX_SELLERS)
        {
            cout << "We turned away " << MAX_SELLERS - numberOfSellersToday << " sellers." << endl;
            numberOfSellersToday = MAX_SELLERS;
        }

        // set up array of seller threads - and get them to work
       
        
        //finish up
       
        
        //final output
        cout << "Everyone is finished" << endl;
        cout << "Total is " << totalSales << endl;
    }
    return 0;

}
