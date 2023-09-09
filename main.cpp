#include <cstdlib>
#include <iostream>
#include "indicators/moving_averages/include/SimpleMovingAverage.hpp"
#include "indicators/moving_averages/include/ExponentialMovingAverage.hpp"

int main(){
    SimpleMovingAverage sma = SimpleMovingAverage(4);
    ExponentialMovingAverage ema = ExponentialMovingAverage(4);
    //create dataset
    std::cout<<"creating dataset"<<std::endl;

    std::vector<double> data;
    for(double i=1;i<21;i++){
        data.push_back(i);
    }
    std::vector<double> moving_average = sma.calculate(data);
    std::vector<double> e_moving_average = ema.calculate(data);
    for(int i =0; i<moving_average.size();i++){
        std::cout<<"SMA"<<moving_average.at(i)<<std::endl;
        std::cout<<"EMA"<<e_moving_average.at(i)<<std::endl;

    }
}