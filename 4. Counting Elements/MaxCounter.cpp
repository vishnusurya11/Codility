// you can use includes, for example:
// #include <algorithm>
#include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int M(A.size());
    vector<int> counter(N);
    int max(0);
    for(int i=0; i< M; i++){
        
        if(A[i] > N){
            max = *max_element(counter.begin(), counter.end());
            for(int j=0; j < N; j++){
            counter[j] = max;
            }
        }
        else{
            counter[A[i]-1]=counter[A[i]-1]+1;    
        }   
    }
   
    return counter;
}
