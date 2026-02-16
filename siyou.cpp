#include <cstdint>
struct OHLC{
    uint64_t Open :22;
    int64_t  High :14;
    int64_t  Low  :14;
    int64_t  Close:14;
    OHLC():Open(0),High(0),Low(0),Close(0) {}
    inline int OpenT ()  const{return (int)Open;}
    inline int HighT ()  const{return (int)Open+(int)High;}
    inline int LowT  ()  const{return (int)Open+(int)Low;}
    inline int CloseT()  const{return (int)Open+(int)Close;}
}__attribute__((packed));

int main(int argv,char** argc){
    OHLC sample;
    sample.Open =4000;
    sample.High =8000;
    sample.Low  =0;
    sample.Close=10000;
    return 0;

}

