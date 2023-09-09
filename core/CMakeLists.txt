target_sources(trad PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/source/Backtest.cpp
                            ${CMAKE_CURRENT_SOURCE_DIR}/source/BacktestHandler.cpp
                )
find_package(Arrow REQUIRED Arrow Parquet)
target_include_directories(trad PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include ${Arrow_INCLUDE_DIRS})
target_link_libraries(trad PRIVATE Arrow::Arrow Arrow::Parquet)
