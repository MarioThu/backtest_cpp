target_sources(trad PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/sources/SimpleMovingAverage.cpp
                            ${CMAKE_CURRENT_SOURCE_DIR}/sources/ExponentialMovingAverage.cpp

    )

target_include_directories(trad PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)