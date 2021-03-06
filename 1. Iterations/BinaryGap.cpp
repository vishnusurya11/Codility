// you can use includes, for example:
// #include <algorithm>
#include <cmath>                    // to use ceil and log2 we need cmath library
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int binarygap(0),max_binarygap(0);
    int base(1);
    int start_count(0);
    int loop(ceil(log2(N)));      //gives us the number of bits required to represent the N
    
    for(int i=0; i < loop ; i++){
        if((N & base) == 1){                   //checks whether the last bit of N is 1 or not
            if(start_count == 1){
                start_count=0;
                if(binarygap > max_binarygap){
                    max_binarygap= binarygap;
                    }
                binarygap=0;
                }
            if(start_count == 0){              
                start_count=1;        
                }   
            }
        else{    
            if(start_count == 1){
                binarygap=binarygap+1;
                }
            }    
        N = N >> 1;                     // right shifts N by 1
        }
    
    
    return max_binarygap;
}
