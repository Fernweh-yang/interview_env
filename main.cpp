#include <vector>
#include <iostream>
#include <utility>
#include <spdlog/spdlog.h>
#include <eigen3/Eigen/Core>

int main(){

    std::vector<std::vector<int>> nums(6,std::vector<int>(4,0));
    for(auto x : nums){
        std::cout << x[0] << std::endl;
    }
    return 0;
}