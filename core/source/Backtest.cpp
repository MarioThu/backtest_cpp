#include "Backtest.hpp"
//#include "SimpleMovingAverage.hpp"

void Backtest::test_print(){
    for(auto i: this->m_data){
        std::cout<<i.close<<std::endl;
    }
}

void Backtest::run(){
    for(int i=0;i<this->m_data.size();i++){
        // check if in position
        if(m_in_position){
            // check if stop loss or take profit hits with this candle
            
            continue;
        }
        // if not in position check the output from strategy
        // create new vector with data from actual candle

        std::vector<TickerData> current_data(this->m_data.begin(),this->m_data.begin()+i+1);

        int signal = run_strategy(current_data);

        if(signal){
            // create buy position
            m_in_position=true;
            continue;
        }
        if(signal==-1){
            // create sell position
            m_in_position=true;
            continue;
        }
        // no signal to create position

    }   

}

int Backtest::run_strategy(std::vector<TickerData>& data){

    return 1 ;
}