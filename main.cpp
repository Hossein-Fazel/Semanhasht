#include "3I8.hpp"

#include <iostream>
#include <map>
using namespace std;


int main()
{
    Tehran t1;
    t1.add_station();
    t1.create_matrix();
    t1.dijkstra(10, 53);
}