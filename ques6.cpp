#include <iostream>
#include <vector>
using namespace std;

bool check_complete_graph(vector<vector<int>> matrisk){

    for(int i =0; i< matrisk.size(); ++i){
        for(int j = 0; j< matrisk[i].size(); ++j){
            if( i == j){

            }
            else{
                if(matrisk[i][j] < 1){
                    return false;
                }
            }
        }
    }
    return true;


}

int main(){
    vector<vector<int>> mat = {
        {0,1,1,1},
        {1,2,1,1},
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