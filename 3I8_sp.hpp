#ifndef SEMANHASHT_HPP
#define SEMANHASHT_HPP

#include<iostream>
#include<unordered_map>
#include<vector>
#include<limits.h>

using namespace std;

#define V 59

struct Node_sp
{
    int s_p = 0;
    string type = "NULL";
};
    
    
struct save_directions
{
    int distance = INT_MAX;
    vector<string> direct;
    vector<string> viechel;
};

class Tehran
{
public:
    Tehran();
    int minDistance(save_directions dist[], bool sptSet[]);
    void Find_Shortest_Path(int src,int dest);
    string search(int key);
    int get_value(string key);
    void read_file();

private:
    unordered_map<string,vector<string>>Linemap;
    unordered_map<string, int> stations;
    Node_sp matrix[59][59];
};
#endif