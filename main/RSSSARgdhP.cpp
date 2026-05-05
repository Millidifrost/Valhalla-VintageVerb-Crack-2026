#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility {
public:
    static int sum(const std::vector<int>& nums) {
        return std::accumulate(nums.begin(), nums.end(), 0);
    }
    static double average(const std::vector<int>& nums) {
        return static_cast<double>(sum(nums)) / nums.size();
    }
    static void sortAsc(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
    }
    static void sortDesc(std::vector<int>& nums) {
        std::sort(nums.rbegin(), nums.rend());
    }
    static void printVector(const std::vector<int>& nums) {
        for (int num : nums) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }
};
int main() {
    std::vector<int> numbers = {5, 3, 8, 6, 2};
    std::cout << "Sum: " << Utility::sum(numbers) << std::endl;
    std::cout << "Average: " << Utility::average(numbers) << std::endl;
    Utility::sortAsc(numbers);
    std::cout << "Sorted Ascending: ";
    Utility::printVector(numbers);
    Utility::sortDesc(numbers);
    std::cout << "Sorted Descending: ";
    Utility::printVector(numbers);
    return 0;
}
