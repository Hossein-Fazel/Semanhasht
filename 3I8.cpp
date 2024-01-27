#include "3I8.hpp"
#include <stdexcept>
#include <iostream>
#include <map>
using namespace std;

#define V 59

Tehran::Tehran()
{
    add_station();
    create_matrix();
}

void Tehran::create_matrix()
{
    matrix[0][1].type = "l6" ;               matrix[1][0].type = "l6" ;
    matrix[0][1].s_p = 10 ;                  matrix[1][0].s_p = 10 ;

    matrix[1][2].type = "l6" ;               matrix[2][1].type = "l6" ;
    matrix[1][2].s_p = 6 ;                   matrix[2][1].s_p = 6 ;

    matrix[2][3].type = "l6" ;               matrix[3][2].type = "l6" ;
    matrix[2][3].s_p = 8 ;                   matrix[3][2].s_p = 8 ;

    matrix[3][4].type = "l6" ;               matrix[4][3].type = "l6" ;
    matrix[3][4].s_p = 2 ;                   matrix[4][3].s_p = 2 ;

    matrix[4][5].type = "l6" ;               matrix[5][4].type = "l6" ;
    matrix[4][5].s_p = 2 ;                   matrix[5][4].s_p = 2 ;

    matrix[5][6].type = "l6" ;               matrix[6][5].type = "l6" ;
    matrix[5][6].s_p = 5 ;                   matrix[6][5].s_p = 5 ;

    matrix[6][7].type = "l6" ;               matrix[7][6].type = "l6" ;
    matrix[6][7].s_p = 2 ;                   matrix[7][6].s_p = 2 ;

    matrix[7][8].type = "l6" ;               matrix[8][7].type = "l6" ;
    matrix[7][8].s_p = 6 ;                   matrix[8][7].s_p = 6 ;

    matrix[8][9].type = "l6" ;               matrix[9][8].type = "l6" ;
    matrix[8][9].s_p = 10 ;                  matrix[9][8].s_p = 10 ;

//++++++++++++++++++++++++++++++++++++++++++++++line4++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    matrix[10][1].type = "l4" ;               matrix[1][10].type = "l4" ;
    matrix[10][1].s_p = 5 ;                   matrix[1][10].s_p = 5 ;

    matrix[1][11].type ="l4" ;                matrix[11][1].type ="l4" ;
    matrix[1][11].s_p = 4 ;                   matrix[11][1].s_p = 4 ;

    matrix[11][12].type = "l4" ;               matrix[12][11].type = "l4" ;
    matrix[11][12].s_p = 5;                   matrix[12][11].s_p = 5 ;

    matrix[12][13].type = "l4" ;               matrix[13][12].type = "l4" ;
    matrix[12][13].s_p = 6 ;                   matrix[13][12].s_p = 6 ;

    matrix[13][14].type = "l4" ;               matrix[14][13].type = "l4" ;
    matrix[13][14].s_p = 2 ;                   matrix[14][13].s_p = 2 ;

    matrix[14][15].type = "l4" ;               matrix[15][14].type = "l4" ;
    matrix[14][15].s_p = 4 ;                   matrix[15][14].s_p = 4 ;

    matrix[15][16].type = "l4" ;               matrix[16][15].type = "l4" ;
    matrix[15][16].s_p = 2 ;                   matrix[16][15].s_p = 2 ;

    matrix[16][17].type = "l4" ;               matrix[17][16].type = "l4" ;
    matrix[16][17].s_p = 1 ;                   matrix[17][16].s_p = 1 ;

    matrix[17][18].type = "l4" ;               matrix[18][17].type = "l4" ;
    matrix[17][18].s_p = 3 ;                   matrix[18][17].s_p = 3 ;

    matrix[18][19].type = "l4" ;               matrix[19][18].type = "l4" ;
    matrix[18][19].s_p = 1 ;                   matrix[19][18].s_p = 1 ;

    matrix[19][20].type ="l4" ;                matrix[20][19].type ="l4" ;
    matrix[19][20].s_p = 1 ;                   matrix[20][19].s_p = 1 ;

    matrix[20][21].type = "l4" ;               matrix[21][20].type = "l4" ;
    matrix[20][21].s_p = 2 ;                   matrix[21][20].s_p = 2 ;

    matrix[21][7].type = "l4" ;               matrix[7][21].type = "l4" ;
    matrix[21][7].s_p = 2 ;                   matrix[7][21].s_p = 2 ;

    matrix[7][22].type = "l4" ;               matrix[22][7].type = "l4" ;
    matrix[7][22].s_p = 1 ;                   matrix[22][7].s_p = 1 ;

    matrix[22][23].type = "l4" ;               matrix[23][22].type = "l4" ;
    matrix[22][23].s_p = 3 ;                   matrix[23][22].s_p = 3 ;

    matrix[23][24].type = "l4" ;               matrix[24][23].type = "l4" ;
    matrix[23][24].s_p = 1 ;                   matrix[24][23].s_p = 1 ;

    matrix[24][25].type = "l4" ;               matrix[25][24].type = "l4" ;
    matrix[24][25].s_p = 1 ;                   matrix[25][24].s_p = 1 ;

    matrix[25][26].type = "l4" ;               matrix[26][25].type = "l4" ;
    matrix[25][26].s_p = 7 ;                  matrix[26][25].s_p = 7 ;


    //++++++++++++++++++++++++++++++++++++++++++++++++++++line3+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


    matrix[27][28].type = "l3" ;             matrix[28][27].type = "l3" ;
    matrix[27][28].s_p = 8 ;                  matrix[28][27].s_p = 8 ;

    matrix[28][29].type ="l3" ;                matrix[29][28].type ="l3" ;
    matrix[28][29].s_p = 2 ;                   matrix[29][28].s_p = 2 ;

    matrix[29][30].type = "l3" ;               matrix[30][29].type = "l3" ;
    matrix[29][30].s_p = 2 ;                   matrix[30][29].s_p = 2 ;

    matrix[30][31].type = "l3" ;               matrix[31][30].type = "l3" ;
    matrix[30][31].s_p = 1 ;                   matrix[31][30].s_p = 1 ;

    matrix[31][32].type = "l3" ;               matrix[32][31].type = "l3" ;
    matrix[31][32].s_p = 3 ;                   matrix[32][31].s_p = 3 ;

    matrix[32][18].type = "l3" ;               matrix[18][32].type = "l3" ;
    matrix[32][18].s_p = 4 ;                   matrix[18][32].s_p = 4 ;

    matrix[18][4].type = "l3" ;               matrix[4][18].type = "l3" ;
    matrix[18][4].s_p = 2 ;                   matrix[4][18].s_p = 2 ;

    matrix[4][33].type = "l3" ;               matrix[33][4].type = "l3" ;
    matrix[4][33].s_p = 1 ;                   matrix[33][4].s_p = 1 ;

    matrix[33][34].type = "l3" ;               matrix[34][33].type = "l3" ;
    matrix[33][34].s_p = 2 ;                  matrix[34][33].s_p = 2 ;

    matrix[34][35].type = "l3" ;               matrix[35][34].type = "l3" ;
    matrix[34][35].s_p = 3 ;                  matrix[35][34].s_p = 3 ;

    matrix[35][36].type ="l3" ;                matrix[36][35].type ="l3" ;
    matrix[35][36].s_p = 1 ;                   matrix[36][35].s_p = 1 ;

    matrix[36][37].type = "l3" ;               matrix[37][36].type = "l3" ;
    matrix[36][37].s_p = 2 ;                   matrix[37][36].s_p = 2 ;

    matrix[37][38].type = "l3" ;               matrix[38][37].type = "l3" ;
    matrix[37][38].s_p = 5 ;                   matrix[38][37].s_p = 5 ;

    matrix[38][39].type = "l3" ;               matrix[39][38].type = "l3" ;
    matrix[38][39].s_p = 10 ;                   matrix[39][38].s_p = 10 ;

    matrix[39][40].type = "l3" ;               matrix[40][39].type = "l3" ;
    matrix[39][40].s_p = 4 ;                   matrix[40][39].s_p = 4 ;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++line1+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    matrix[41][42].type = "l1" ;               matrix[42][41].type = "l1" ;
    matrix[41][42].s_p = 2 ;                  matrix[42][41].s_p = 2 ;

    matrix[42][43].type ="l1" ;                matrix[43][42].type ="l1" ;
    matrix[42][43].s_p = 3 ;                   matrix[43][42].s_p = 3 ;

    matrix[43][44].type = "l1" ;               matrix[44][43].type = "l1" ;
    matrix[43][44].s_p = 4 ;                   matrix[44][43].s_p = 4 ;

    matrix[44][45].type = "l1" ;               matrix[45][44].type = "l1" ;
    matrix[44][45].s_p = 5 ;                   matrix[45][44].s_p = 5 ;

    matrix[45][35].type = "l1" ;               matrix[35][45].type = "l1" ;
    matrix[45][35].s_p = 7 ;                   matrix[35][45].s_p = 7 ;

    matrix[35][46].type = "l1" ;               matrix[46][35].type = "l1" ;
    matrix[35][46].s_p = 2 ;                   matrix[46][35].s_p = 2 ;

    matrix[46][5].type = "l1" ;               matrix[5][46].type = "l1" ;
    matrix[46][5].s_p = 2 ;                   matrix[5][46].s_p = 2 ;

    matrix[5][47].type = "l1" ;               matrix[47][5].type = "l1" ;
    matrix[5][47].s_p = 2 ;                   matrix[47][5].s_p = 2 ;

    matrix[47][20].type = "l1" ;               matrix[20][47].type = "l1" ;
    matrix[47][20].s_p = 1 ;                  matrix[20][47].s_p = 1 ;

    matrix[20][48].type = "l1" ;               matrix[48][20].type = "l1" ;
    matrix[20][48].s_p = 4 ;                  matrix[48][20].s_p = 4 ;

    matrix[48][49].type = "l1" ;               matrix[49][48].type = "l1" ;
    matrix[48][49].s_p = 6 ;                  matrix[49][48].s_p = 6 ;

    matrix[49][50].type = "l1" ;               matrix[50][49].type = "l1" ;
    matrix[49][50].s_p = 3 ;                  matrix[50][49].s_p = 3 ;

    matrix[50][51].type = "l1" ;               matrix[51][50].type = "l1" ;
    matrix[50][51].s_p = 9 ;                  matrix[51][50].s_p = 9 ;

    matrix[51][52].type = "l1" ;               matrix[52][51].type = "l1" ;
    matrix[51][52].s_p = 13 ;                  matrix[52][51].s_p = 13 ;

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++b1++++++++++++++++++++++++++++++++++++++++++++++++

    matrix[53][13].type = "b1" ;               matrix[13][53].type = "b1" ;
    matrix[53][13].s_p = 3 ;                  matrix[13][53].s_p = 3 ;

    matrix[14][17].type = "b1" ;               matrix[17][14].type = "b1" ;
    matrix[14][17].s_p = 4 ;                  matrix[17][14].s_p = 4 ;

    matrix[17][19].type = "b1" ;               matrix[19][17].type = "b1" ;
    matrix[17][19].s_p = 3 ;                  matrix[19][17].s_p = 3 ;

    matrix[19][20].type = "b1" ;               matrix[20][19].type = "b1" ;
    matrix[19][20].s_p = 1 ;                  matrix[20][19].s_p = 1 ;
    
    matrix[20][6].type = "b1" ;               matrix[6][20].type = "b1" ;
    matrix[20][6].s_p = 2 ;                  matrix[6][20].s_p = 2 ;

    matrix[6][22].type = "b1" ;               matrix[22][6].type = "b1" ;
    matrix[6][22].s_p = 4 ;                  matrix[22][6].s_p = 4 ;

    matrix[22][54].type = "b1" ;               matrix[54][22].type = "b1" ;
    matrix[22][54].s_p = 10 ;                  matrix[54][22].s_p = 10 ;

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++b2++++++++++++++++++++++++++++++++++++++++++++++++

    matrix[55][40].type = "b2" ;               matrix[40][55].type = "b2" ;
    matrix[55][40].s_p = 12 ;                  matrix[40][55].s_p = 12 ;
    
    matrix[40][23].type = "b2" ;               matrix[23][40].type = "b2" ;
    matrix[40][23].s_p = 19 ;                  matrix[23][40].s_p = 19 ;

    matrix[23][8].type = "b2" ;               matrix[8][23].type = "b2" ;
    matrix[23][8].s_p = 8 ;                  matrix[8][23].s_p = 8 ;

    matrix[8][56].type = "b2" ;               matrix[56][8].type = "b2" ;
    matrix[8][56].s_p = 8 ;                  matrix[56][8].s_p = 8 ;

    //++++++++++++++++++++++++++++++++++++++++++++++++++++++b3++++++++++++++++++++++++++++++++++++++++++++++++

    matrix[57][41].type = "b3" ;               matrix[41][57].type = "b3" ;
    matrix[57][41].s_p = 4 ;                  matrix[41][57].s_p = 4 ;
    
    matrix[41][44].type = "b3" ;               matrix[44][41].type = "b3" ;
    matrix[41][44].s_p = 8 ;                  matrix[44][41].s_p = 8 ;

    matrix[44][4].type = "b3" ;               matrix[4][44].type = "b3" ;
    matrix[44][4].s_p = 11 ;                  matrix[4][44].s_p = 11 ;

    matrix[4][30].type = "b3" ;               matrix[30][4].type = "b3" ;
    matrix[4][30].s_p = 8 ;                  matrix[30][4].s_p = 8 ;

    matrix[30][58].type = "b3" ;               matrix[58][30].type = "b3" ;
    matrix[30][58].s_p = 5 ;                  matrix[58][30].s_p = 5 ;
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

        cout<< dist[dest].distance << endl;

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