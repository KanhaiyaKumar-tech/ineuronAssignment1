#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
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

    int target;
    //std::cout << "Enter the target sum: ";
    std::cin >> target;

    int index = searchInsert(nums, target);

    std::cout  << index << std::endl;

    return 0;
}

