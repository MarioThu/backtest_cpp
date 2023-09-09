#ifndef MOVINGAVERAGE_HPP
#define MOVINGAVERAGE_HPP

#include <cstdlib>
#include <iostream>
#include <vector>

struct TickerData{
    double close;
    double open;
    double low;
    double high;
    double volume;
    
};

class Backtest{
    public:
        Backtest();
        Backtest(std::vector<TickerData> data):m_data{data}{};
        void test_print();
        void run();
    private:
        std::vector<TickerData> m_data;
        int run_strategy(std::vector<TickerData>& data);
        bool m_in_position;
        

        
};
#endif