#include <iostream>
#include <vector>
using namespace std;

class SET{
    public:
        bool is_member(int element ,const int arr[], int size){
                int con =1;
                for (int i =0; i< size; ++i){
                    if(arr[i] == element){
                        return true;
                    }
                }
                if (con == 0){
                    return true;
                }

                return 0;
        }
        void list_powerset(int arr[]){

        }


    vector<vector<int>> generatePowerSet(const vector<int>& nums) {
    int n = nums.size();
    int subsetsCount = 1 << n;  // Total number of subsets: 2^n

    vector<vector<int>> powerSet;
    for (int i = 0; i < subsetsCount; ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {  // Check if jth bit is set in i
                subset.push_back(nums[j]);
            }
        }
        powerSet.push_back(subset);
    }

    return powerSet;
    }

};

int main(){
    SET set;
    // checking if an element is a member of a set.
    int arr[] = {1,2,3,4,5 };
    int size = sizeof(arr)/sizeof(int);
    cout << set.is_member(7,arr,size) << "\n";

    // generating power set.

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> powerSet = set.generatePowerSet(nums);

    // Print the power set
    for (const auto& subset : powerSet) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}