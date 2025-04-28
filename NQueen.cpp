/*
Problem
The N-Queen problem is the problem of placing N queens on a chessboard of size N × N so that they cannot attack each other.

Write a program to find the number of ways to place a queen, given N.

Input
N is given in the first line (1 ≤ N < 15)

Output
Outputs the number of cases where N queens are placed so that they cannot attack each other in the first line.
*/

#include <iostream>
using namespace std;

int N;
int result = 0;
bool col[15];         // 열 체크
bool diag1[30];       // \ 대각선 체크 (row + col)
bool diag2[30];       // / 대각선 체크 (row - col + N - 1)

void backtrack(int row) {
    if (row == N) {
        result++;
        return;
    }
    
    for (int i = 0; i < N; ++i) { // i는 열
        if (col[i] || diag1[row + i] || diag2[row - i + N - 1])
            continue;
        
        col[i] = diag1[row + i] = diag2[row - i + N - 1] = true;
        backtrack(row + 1);
        col[i] = diag1[row + i] = diag2[row - i + N - 1] = false; // 백트래킹
    }
}

int main() {
    cin >> N;
    backtrack(0);
    cout << result << "\n";
    return 0;
}
