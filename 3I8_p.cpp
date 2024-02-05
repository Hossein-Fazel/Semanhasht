#include "3I8_p.hpp"
#include <stdexcept>
#include <iostream>
#include <map>
#include <fstream>

using namespace std;


 Node_p Price::get_min()
{
	Node_p minimun ;
	for(auto i : price_edge)
	{
		if( minimun.geymat > i.geymat)
		{
			minimun = i ;
		}
	}
	return minimun ;
}