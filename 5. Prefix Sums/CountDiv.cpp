// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int Count_Div(0),num(A);
    
    while( num <= B){
        if(num % K == 0){
            Count_Div=Count_Div+1;
        }else{
            num=num+(num%K);
            Count_Div=Count_Div+1;
        }
        num=num+K;
    }
    return Count_Div;
}
