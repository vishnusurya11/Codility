// you can use includes, for example:
// #include <algorithm>
#include <algorithm>     //to use SORT command
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(),A.end()); //sorts all the elements in the vector
    int N(A.size());
    
    if(A[N-1] < 0 ) return 1; //[-3,-1]
    
    if(A[0] > 1) return 1;   //[2,3]
    
    for(int i=1; i < N; i++){
        if(A[i]- A[i-1] > 1)return A[i-1]+1;    
    }
    
    return A[N-1]+1;  //[1,2,3]
}
