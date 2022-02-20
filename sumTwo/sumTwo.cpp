#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
std::ostream& operator << (std::ostream& os, const std::vector<T>& vec) {
    for (auto elem : vec) {
        os << elem << " ";
    }
    return os;
}


std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {

    for (auto elem : numbers) {
        std::cout << elem <<std::endl;
    }


    return {0, 2};
}


void testassert(const std::vector<int>& input, int target, const std::vector<int>& result) {

    two_sum(input, target);

    if ( input == result ) {
        std::cout << "PASSED!" << std::endl;
    }
    else {
        std::cout << "FAILED!" << std::endl;
    }
}


int main() {
    testassert({ 1, 2, 3 }, 4, { 0, 2 });
    //testassert(two_sum({1234, 5678, 9012}, 14690), {1, 2});
    //testassert(two_sum({2, 2, 3}, 4), {0, 1});
    return 0;
}

