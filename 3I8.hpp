#ifndef SEMANHASHT_HPP
#define SEMANHASHT_HPP

#include <iostream>
#include <map>
using namespace std;

struct Node
{
    int s_p = 0;
    string type = "NULL";

};

class tehran
{
    public:
        void add_station();
        void create_matrix() ;
        void print();
    private:
        map<string, int> stations;
        Node matrix[59][59] ;


};


#endif