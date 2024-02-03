#include "3I8.hpp"
#include <stdexcept>
#include <iostream>
#include <map>
#include <fstream>

using namespace std;

#define V 59

Tehran::Tehran()
{
    read_file() ;
}

string Tehran::search(int key)
{
    for(auto i : stations)
    {
        if(i.second == key)
        {
            return i.first;
        }
    }
}

void Tehran::add_station()
{
    stations.insert({"Kouhsar", 0});
    stations.insert({"Kashani", 1});
    stations.insert({"Yadegar-e Emam", 2});
    stations.insert({"Boostan-e laleh", 3});
    stations.insert({"Meydan-e Hazrat-e ValiAsr", 4});
    stations.insert({"Haftom-e Tir", 5});
    stations.insert({"Emam Hossein", 6});
    stations.insert({"Meydan-e Shohada", 7});
    stations.insert({"Shahid Rezaei", 8});
    stations.insert({"Haram-e Hazrat-e Abdolazim", 9});
    stations.insert({"Chaharbagh", 10});
    stations.insert({"Allameh Jafari", 11});
    stations.insert({"Eram-e Sabz", 12});
    stations.insert({"Meydan-e Azadi", 13});
    stations.insert({"Ostad Mo'in", 14});
    stations.insert({"Shademan", 15});
    stations.insert({"Towhid", 16});
    stations.insert({"Meydan-e Enghelab-e Eslami", 17});
    stations.insert({"Teatr-e Shahr", 18});
    stations.insert({"Ferdowsi", 19});
    stations.insert({"Darvazeh Dowlat", 20});
    stations.insert({"Darvazeh Shemiran", 21});
    stations.insert({"Ebn-e Sina", 22});
    stations.insert({"Pirouzi", 23});
    stations.insert({"Nabard", 24});
    stations.insert({"Nirou Havaei", 25});
    stations.insert({"Shahid Kolahdouz", 26});
    stations.insert({"Azadegan", 27});
    stations.insert({"Zamzam", 28});
    stations.insert({"Javadiyeh", 29});
    stations.insert({"Rahahan", 30});
    stations.insert({"Mahdiyeh", 31});
    stations.insert({"Moniriyeh", 32});
    stations.insert({"Meydan-e Jahad", 33});
    stations.insert({"Merza-ye Shirazi", 34});
    stations.insert({"Shahid Beheshti", 35});
    stations.insert({"Sohrevardi", 36});
    stations.insert({"Shahid Ghodousi", 37});
    stations.insert({"Shahid Zeynoddin", 38});
    stations.insert({"Aghdasiyeh", 39});
    stations.insert({"Gha'em", 40});
    stations.insert({"Tajrish", 41});
    stations.insert({"Gheytariyeh", 42});
    stations.insert({"Gholhak", 43});
    stations.insert({"Mirdamad", 44});
    stations.insert({"Shahid Haghani", 45});
    stations.insert({"Shahid Mofatteh", 46});
    stations.insert({"Taleghani", 47});
    stations.insert({"Panzdah-e Khordad", 48});
    stations.insert({"Shoush", 49});
    stations.insert({"Jonoub Terminal", 50});
    stations.insert({"Shahr-e Rey", 51});
    stations.insert({"Kahrizak", 52});
    stations.insert({"Bimeh", 53});
    stations.insert({"Tehran Pars", 54});
    stations.insert({"Khajeh Abdollah-e Ansari", 55});
    stations.insert({"Payaneh Javanmard", 56});
    stations.insert({"Shahid Sadr", 57});
    stations.insert({"Shahrak-e Shari'ati", 58});
}

int Tehran::minDistance(save_directions dist[], bool sptSet[])
{

	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v].distance <= min)
			min = dist[v].distance, min_index = v;

	return min_index;
}

void Tehran::dijkstra(int src,int dest)
{    
    if( src >=0 && src <=58 && dest >=0 && dest <=58)
    {
        save_directions dist[V]; 
                    
        bool sptSet[59]; 
        
        for (int i = 0; i < V; i++)
            dist[i].distance = INT_MAX, sptSet[i] = false;

        
        dist[src].distance = 0;
        dist[src].direct.push_back(search(src));

        
        for (int count = 0; count < V - 1; count++) 
        {
            string viechel = "";
            
            int u = minDistance(dist, sptSet);

            
            sptSet[u] = true;

            
            for (int v = 0; v < V; v++)

                
                if (!sptSet[v] && matrix[u][v].s_p && dist[u].distance != INT_MAX && dist[u].distance + matrix[u][v].s_p < dist[v].distance)
                {
                    dist[v].distance = dist[u].distance + matrix[u][v].s_p;

                    dist[v].direct = dist[u].direct;
                    dist[v].direct.push_back(search(v));
                    dist[v].viechel = dist[u].viechel;
                    dist[v].viechel.push_back(matrix[v][u].type);
                }
        }

        cout<< dist[dest].distance << endl ;

        for(int i = 0 ; i < dist[dest].direct.size() - 1; i++)
        {
            cout << dist[dest].direct[i] << " -- ";

            if(dist[dest].viechel[i] == "l1" or dist[dest].viechel[i] == "l6" or dist[dest].viechel[i] == "l3" or dist[dest].viechel[i] == "l4")
            {
                cout << "(Taxi or Subway)" ;
            }
            else
            {
                cout <<  "(Bus)" ;
            }
        
            cout << " --> ";
        }
        cout << dist[dest].direct[dist[dest].direct.size() - 1];
    }
    else
    {
        throw invalid_argument("Not existing value!") ;

    }
}

int Tehran::get_value(string key)
{
    if(stations.count(key) == 0)
    {
        return -1;
    }
    //cout << "val"<<stations[key];
    return stations[key];
}

void Tehran::create_busline()
{
    Busline1.insert({"Tehran Pars","Ebn-e Sina","Emam Hossein","Darvazeh Dowlat","Ferdowsi","Ferdowsi","Ostad Mo'in","Meydan-e Azadi","Bimeh"});
    Busline2.insert({"Khajeh Abdollah-e Ansari","Gha'em","Pirouzi","Shahid Rezaei","Payaneh Javanmard"});
    Busline3.insert({"Shahid Sadr","Tajrish","Mirdamad","Meydan-e Hazrat-e ValiAsr","Rahahan","Shahrak-e Shari'ati"});
}

void Tehran::create_metrolines()
{
    l4.insert({"Shahid Kolahdouz ", "Nirou Havaei", "Nabard", "Pirouzi", "Ebn-e Sina", "Meydan-e Shohada", "Darvazeh Shemiran",
     "Darvazeh Dowlat", "Ferdowsi", "Teatr-e Shahr", "Meydan-e Enghelab-e Eslami", "Towhid", "Shademan", "Ostad Mo'in",
      "Meydan-e Azadi", "Eram-e Sabz", "Allameh Jafari", "Kashani", "Chaharbagh"});

    l3.insert({"Gha'em", "Aghdasiyeh", "Shahid Zeynoddin", "Shahid Ghodousi", "Sohrevardi", "Shahid Beheshti", "Merza-ye Shirazi",
    "Meydan-e Jahad", "Meydan-e Hazrat-e ValiAsr", "Teatr-e Shahr", "Moniriyeh", "Mahdiyeh", "Rahahan", "Javadiyeh", "Zamzam", "Azadegan"});

    l1.insert({"Tajrish", "Gheytariyeh", "Gholhak", "Mirdamad", "Shahid Haghani", "Shahid Beheshti", "Shahid Mofatteh", "Haftom-e Tir", "Taleghani",
    "Darvazeh Dowlat", "Panzdah-e Khordad", "Shoush", "Jonoub Terminal", "Shahr-e Rey", "Shahr-e Rey"});

    l6.insert({"Haram-e Hazrat-e Abdolazim", "Shahid Rezaei", "Meydan-e Shohada", "Emam Hossein", "Haftom-e Tir", "Meydan-e Hazrat-e ValiAsr",
    "Boostan-e laleh", "Yadegar-e Emam", "Kashani", "Kouhsar"});
}

void Tehran::read_file()
{

     ifstream file ;
     string arr[2] = {"line" , "bus"} ;
     int index = 0 ; 
     for(int i=0 ; i<2 ; i++)
     {
        file.open(arr[i]+".txt" , ios::in );
        if(file.is_open())
        { 
            string line ;
            getline( file , line);
            line.erase(line.size()-1 , 1) ;
            //cout << "line:" << line << endl ;

            while (!file.eof())
            {
                string stat1 ;
                string stat2 ;
                string dis ;
                getline(file , stat1);

                if(stat1 == "end")
                {
                        getline( file , line);
                        if (line.size()!= 0)
                        {
                            line.erase(line.size()-1 , 1) ;
                        }
                        //cout << "line:" << line << endl ; 
                        getline(file , stat1) ;
                        
                }

                getline(file , stat2);
                getline(file , dis);
                //cout << "   :" << stat1 << " " << stat2 << " " << stoi(dis) << endl ; 
                if (stations.count(stat1)== 0)
                {
                    stations.insert({stat1 , index}) ;
                    //cout << "state1 ;"<< stat1 << index << endl ;
                    index++ ;
                    
                }
                if (stations.count(stat2)== 0)
                {
                    stations.insert({stat2 , index}) ;
                    //cout << "state2 ;"<< stat2 << index << endl ;
                    index++ ;
                }
                
               if( matrix[get_value(stat1)][get_value(stat2)].s_p != 0 && matrix[get_value(stat1)][get_value(stat2)].s_p > stoi(dis) ) // for more info
               {
                 matrix[get_value(stat1)][get_value(stat2)].type = line ;
                 matrix[get_value(stat1)][get_value(stat2)].s_p = stoi(dis) ;
                 matrix[get_value(stat2)][get_value(stat1)].type = line ;
                 matrix[get_value(stat2)][get_value(stat1)].s_p = stoi(dis) ;
                 
               }
               else if( matrix[get_value(stat1)][get_value(stat2)].s_p == 0 )
               {
                 matrix[get_value(stat1)][get_value(stat2)].type = line ;
                 matrix[get_value(stat1)][get_value(stat2)].s_p = stoi(dis) ;
                 matrix[get_value(stat2)][get_value(stat1)].type = line ;
                 matrix[get_value(stat2)][get_value(stat1)].s_p = stoi(dis) ;

               }
            
            }
        file.close() ;
        }
        
     }
}