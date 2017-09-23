// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int Count_Div(0),num(A);
   
    if(B < K) return 0;
   
    while( num <= B){
        if(num % K == 0){
            Count_Div=Count_Div+1;
        }else{
            if(A < K) num = num+(K-A);
            else num=num+(num%K);
            if(num <= B ) Count_Div=Count_Div+1;
        }
        num=num+K;
    }
    return Count_Div;
}
