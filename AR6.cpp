#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> uniqueElements;

    for (int num : nums) {
        if (uniqueElements.count(num) > 0) {
            return true;
        }
        uniqueElements.insert(num);
    }

    return false;
}

int main() {
    //std::vector<int> nums = {1, 2, 3, 1};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    bool result = containsDuplicate(nums);

    std::cout << "Result: " << std::boolalpha << result << std::endl;

    return 0;
}

