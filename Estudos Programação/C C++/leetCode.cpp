
//Verifica se o  valor existe dentro do vetor
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Cria vetores
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0) //count ve quantas vezes o numero aparece no intervalo do vetor
                return true;
            seen.insert(num);
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //sorte organiza os numeros em ordem do começo ao final
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};
