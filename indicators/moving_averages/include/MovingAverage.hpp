#ifndef MOVINGAVERAGE_HPP
#define MOVINGAVERAGE_HPP

#include <vector>


class MovingAverage
{
    protected:
        int m_period;
    public:
        MovingAverage(int period):
            m_period{period}
            {};
     
        virtual std::vector<double> calculate(std::vector<double>& data)=0;
};

#endif