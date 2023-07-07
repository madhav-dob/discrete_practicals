#include <iostream>
#include <list>
using namespace std;

bool check_complete_graph(list<list<int>> matrisk){
    int row = 0;
    for(const auto& i : matrisk){
        int col = 0;
        for(int element : i){
            
            if( row ==col){

            }
            else{
                if(element < 1){
                    return false;
                }
            }

            col = col +1;
        }
        row = row+1;
    }
    return true;


}

int main(){
    list<list<int>> mat = {
        {0,1,1,1},
        {1,2,1,0},
        {1,1,0,1},
        {1,1,1,0},
    };
    if(check_complete_graph(mat)){
        cout<< "the given graph is complete !" << "\n";
    }
    else{
        cout<< "the given graph is not a complete graph !" << "\n";
    }
}