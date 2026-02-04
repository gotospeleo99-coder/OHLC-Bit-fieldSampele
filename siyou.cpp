#include <iostream>
struct OHLC{
    unsigned int Open  :22;
    signed int High  　:14;
    signed int Low   　:14;
    signed int Close 　:14;
};

int main(int argv,char** argc){
    OHLC sample;
    sample.Open =4000;
    sample.High =8000;
    sample.Low  =0;
    sample.Close=10000;
    return 0;

}
