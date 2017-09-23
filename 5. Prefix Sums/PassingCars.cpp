// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int N(A.size());
    if ( N > 100000) return -1;
    
    int going_east(0),passing_cars(0);
    
    for(int i=0; i < N; i++){
        if(A[i] == 0){
            going_east++;
        }else {
            passing_cars= going_east + passing_cars;
        }
    
    }
    if(passing_cars > 1000000000 || passing_cars < 0) return -1;
    return passing_cars;
}
