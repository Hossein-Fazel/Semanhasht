#ifndef SEMANHASHT_HPP
#define SEMANHASHT_HPP

#include <iostream>
#include <map>
#include<vector>
#include<limits.h>
#include<unordered_set>

using namespace std;

#define V 59

struct Node
{
    int s_p = 0;
    string type = "NULL";
};
    
    
struct save_directions
{
    int distance = 0;
    vector<string> direct;
    vector<string> viechel;
};

class Tehran
{
public:
    Tehran();

    void add_station();
    void create_matrix();
    int minDistance(save_directions dist[], bool sptSet[]);
    void dijkstra(int src,int dest);
    string search(int key);
    int get_value(string key);
    void create_busline();
    void create_metrolines();
    void read_file();

private:

    unordered_set<string> Busline1, Busline2, Busline3, l4, l3, l1, l6;
    map<string, int> stations;
    Node matrix[59][59];
};
#endif