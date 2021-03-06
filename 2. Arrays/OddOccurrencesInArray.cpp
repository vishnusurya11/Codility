// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int unpaired(0);
    int vector_size(A.size());
    
    for(int i = 0; i < vector_size; i++){
        unpaired = unpaired ^ A[i];                    //when you XOR two same numbers you get 0, 0 XORed with any int gives the same int
        
        }
    
    
    return unpaired;
}
