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

    void add_station();
    void create_matrix();
    void print();
    int minDistance(save_directions dist[], bool sptSet[]);
    void printSolution(save_directions dist[]);
    void dijkstra(int src,int dest);

private:
    map<string, int> stations;
    Node matrix[59][59];
};



#endif