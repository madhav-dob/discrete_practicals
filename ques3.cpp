#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// void print_result(vector<int>& result , int res_length, int length){
//     for(int i = 0; i < res_length; ++i){
//         for(int j= 0; j<length ; ++j){
//             cout << result[res_length][length];
//         }
            
//     }
// }


void generate_permutations_with_repitation( vector<int>& digits, vector<int>& result ){
    int length = digits.size();
    //int res_length = pow(length,length);

    if (result.size() == digits.size()){
        // print
         for(int num : result){
            cout<< num << " ";
         }
         cout << endl;
         return;

    }

    for(int k =0; k < length; ++k){
        result.push_back(digits[k]);
        generate_permutations_with_repitation(digits,result);
        result.pop_back();
    }
}




int main(){
    vector<int> digits = {1,2,3,4,5};
    vector<int> result ;
    //int num = 0;
    cout << "Permutations with repetations: ";

    generate_permutations_with_repitation(digits,result);

    cout << "Permutatons without repetation : ";

    
    
    return 0;

}