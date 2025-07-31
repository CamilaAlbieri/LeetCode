
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapa;
        
        for (int i = 0 ; i < nums.size(); i++){
            int complement = target - nums[i];
            if (mapa.find(complement) != mapa.end()) {
                return {mapa[complement], i};
            }
            mapa[nums[i]] = i;
        }
        return vector<int>();
    }
};

int main() {
    int n, x, target;
    vector<int> nums;

    cout << "Quantos números no vetor? ";
    cin >> n;

    cout << "Digite os " << n << " números:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    cout << "Digite o valor do target: ";
    cin >> target;

    Solution sol; // cria objeto da classe
    vector<int> resultado = sol.twoSum(nums, target); // chama o método

    if (!resultado.empty()) {
        cout << "Índices encontrados: [" << resultado[0] << ", " << resultado[1] << "]\n";
    } else {
        cout << "Nenhuma combinação.\n";
    }

    return 0;
}
