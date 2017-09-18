// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0) 
    int N(0),temp(0);
    
    N= A.size();
    
    vector<int> rotated_vector(N);
    
    for(int i=0; i < N; i++){
        temp = (i+K)% N;
        rotated_vector[temp] = A[i];
            
        }
    
    return rotated_vector;
}
