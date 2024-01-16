#include <iostream>
#include <string>
#include "Semanhasht.hpp"


using namespace std;

void SMHT::start()
{
    Tehran t1;

    cin >> n;

    while (n--)
    {
        cin.ignore();
        getline(cin, hour);
        getline(cin, src);
        getline(cin, dst);

        t1.dijkstra(t1.get_value(src) , t1.get_value(dst));
    }
    
}