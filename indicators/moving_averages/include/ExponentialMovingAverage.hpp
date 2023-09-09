#include "MovingAverage.hpp"

class ExponentialMovingAverage : public MovingAverage{
    public:
        ExponentialMovingAverage(int period) : MovingAverage(period){
            this->m_weighting_multiplier=2.0/(period+1);
        };
        std::vector<double> calculate(std::vector<double>& data) override;
    private:
        double m_weighting_multiplier;
};