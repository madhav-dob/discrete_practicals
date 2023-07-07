#include <iostream>
#include <vector>
using namespace std;

class RELATION{
    public:
        void is_reflexive( vector<vector<int>> arr){
            int con2 =1;
            cout << "arr size" << arr.size() << "\n";
            for(int i =0; i< arr.size(); ++i){
                // for first element.
                int a = arr[i][0];
                vector<int> vec = {a,a}; 
                int con =0;
                // printing vec
                cout << "vec"<<"\n";
                for (int i =0; i< vec.size(); i++){
                    cout << vec[i] <<",";
                }
                //printing vec over.
                for (int i =0; i< arr.size(); ++i){
                    if(arr[i] == vec){
                        con =1;
                    }
                    else{
                        

                    }
                }
                if (con == 0){
                    con2 =0;
                }
                // for second element.
                int b = arr[i][1];
                vector<int> vec2 = {b,b}; 
                int con3 =0;
                // printing vec
                cout << "vec2"<<"\n";
                for (int i =0; i< vec2.size(); i++){
                    cout << vec2[i] <<",";
                }
                //printing vec over.
                for (int i =0; i< arr.size(); ++i){
                    if(arr[i] == vec2){
                        con3 =1;
                    }
                    else{
                        

                    }
                }
                if (con3 == 0){
                    con2 =0;
                }
                }
            

            if(con2 == 1){
                cout << "reflexive";
            }
            else{
                cout << "not reflexive";
            }
            
        }

        

};



int main(){

    vector<vector<int>> input = {{1,1},{2,4},{2,2},{3,3}};
    RELATION myobj;
    myobj.is_reflexive(input);
}