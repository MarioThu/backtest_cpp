#include "MovingAverage.hpp"

class SimpleMovingAverage: public MovingAverage{
    public:
        SimpleMovingAverage();
        SimpleMovingAverage(int period):
            MovingAverage(period)
            {};
        std::vector<double> calculate(std::vector<double>& data) override ;
       
};