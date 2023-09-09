#include "../include/SimpleMovingAverage.hpp"
#include <iostream>
#include <algorithm>
std::vector<double> SimpleMovingAverage::calculate(std::vector<double>& data) {
    std::vector<double> moving_average;
    for(int i=data.size()-1; i>=0;i--){
        double sum = 0;
        for(int j=i-1;j>=(i-m_period);--j){
            if(j<0){
                sum=0;
                break;
            }
            sum+=data.at(j);
        }
        moving_average.push_back(sum/m_period);
        
    }
    std::reverse(moving_average.begin(),moving_average.end());
    return moving_average;
}