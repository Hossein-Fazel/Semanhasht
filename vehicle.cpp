#include <iostream>
#include <fstream>
#include "vehicle.hpp"

using namespace std;

machine::machine(string file_name)
{
    ifstream read_vehicle('v' + file_name + ".txt");

    read_vehicle >> speed;
    read_vehicle >> traffic_speed;
    
    read_vehicle >> line_price;
    read_vehicle >> traffic_price;

    read_vehicle >> get_in;
    read_vehicle >> traffic_get_in;

    // read_vehicle >> start_traffic_time; wait for overload
    // read_vehicle >> end_traffic_time; wait for overload
}