// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int count(0),N(A.size());
    bool check_river[X+1];
    
    for(int i=1; i < X+1; i++){
            check_river[i] = false;
    }
    
    for(int i=0; i < N; i++){
        if(check_river[A[i]] == false){
            check_river[A[i]] = true;
            count=count+1;
        if(count == X){  //that means all the spots from 0 to X are filled
            return i;
        }
        }
        
    }  
    return -1;
}
