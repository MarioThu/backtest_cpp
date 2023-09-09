// this class will read the parquet file and start a backtest
#include <string>
#include <arrow/api.h>
#include <arrow/io/api.h>
#include <arrow/ipc/api.h>

class BacktestHandler{
    public:
        BacktestHandler();
        bool startBacktest(std::string yaml_path);
        
    
}