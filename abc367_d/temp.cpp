
#include <iostream>
#include <vector>
#include <map>

int main() {
    int N;
    long long K;
    std::cin >> N >> K;
    
    std::vector<int> X(N);
    std::vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        std::cin >> X[i];
        X[i]--;  // 1-based index to 0-based index
    }
    
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    
    std::map<std::vector<int>, int> seen;
    std::vector<std::vector<int>> history;

    int cycle_start = -1, cycle_length = 0;

    for (int k = 0; k <= K; ++k) {
        if (seen.count(A)) {
            cycle_start = seen[A];
            cycle_length = k - cycle_start;
            break;
        }
        
        seen[A] = k;
        history.push_back(A);

        std::vector<int> B(N);
        for (int i = 0; i < N; ++i) {
            B[i] = A[X[i]];
        }
        A = B;
    }
    
    if (cycle_start != -1) {
        // サイクル内のK回目に対応する位置を計算
        int final_index = cycle_start + (K - cycle_start) % cycle_length;
        A = history[final_index];
    } else if (K < history.size()) {
        A = history[K];
    }

    // 結果の出力
    for (int i = 0; i < N; ++i) {
        std::cout << A[i];
        if (i < N - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
