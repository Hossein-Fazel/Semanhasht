#ifndef SEMANHASHT_HPP
#define SEMANHASHT_HPP

#include<iostream>
#include<unordered_map>
#include<vector>
#include<limits.h>
#include<unordered_set>

using namespace std;


struct Node_p
{
	int geymat = INT_MAX ;
    string type = NULL ;

};

 class Price
{
	public:

	vector<Node_p>price_edge ;
	Node_p get_min() ;

};

#endif