#include "../include/ExponentialMovingAverage.hpp"
#include <iostream>
#include <algorithm>
std::vector<double> ExponentialMovingAverage::calculate(std::vector<double>& data ){
    std::vector<double> moving_average;
    double ema =data.at(0);
    moving_average.push_back(ema);

    for(int i=1; i<data.size();i++){
        ema = data.at(i)*m_weighting_multiplier + ema*(1-m_weighting_multiplier);

        moving_average.push_back(ema);
        
    }
    return moving_average;
}