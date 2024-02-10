#include <iostream>
#include <string>
#include "Semanhasht.hpp"

using namespace std;

void SMHT::start()
{
    Tehran t1;
    cin >> n;
    
    while (n--)
    {
        cin.ignore();
        getline(cin, hour);
        getline(cin, src);
        getline(cin, dst);

        try
        {
            save_directions path = t1.Find_Shortest_Path(t1.get_value(src) , t1.get_value(dst));
            t1.print_shortest_path(path);
            t1.complete_matrix_p();
            save_directions pri = t1.find_best_cost(t1.get_value(src) , t1.get_value(dst));
            t1.print_best_price(pri) ;
        }
        catch (invalid_argument e1)
        {
            cout << e1.what();
        }
    }
    
}