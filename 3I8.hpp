#ifndef SEMANHASHT_HPP
#define SEMANHASHT_HPP

#include <iostream>
#include <map>
#include<vector>
#include<limits.h>

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
private:
    map<string, int> stations;
    Node matrix[59][59];
};
#endif