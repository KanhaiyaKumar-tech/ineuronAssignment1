#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0; // Count of elements not equal to val
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    std::vector<int> nums;
    int num;
    //std::cout << "Enter the numbers separated by spaces: ";
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    int val;
    //std::cout << "Enter the value to remove: ";
    std::cin >> val;

    int result = removeElement(nums, val);
    std::cout << "Output: " << result << ", nums = [";
    for (int i = 0; i < result; ++i) {
        std::cout << nums[i];
        if (i != result - 1) {
            std::cout << ",";
        }
    }
    std::cout << ",_*]" << std::endl;

    return 0;
}
