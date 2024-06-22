#include <bits/stdc++.h>
#define ull unsigned long long
#define MOD 998244353
using namespace std;

// モジュラーパワー関数
ull modular_pow(ull base, ull exp, ull mod) {
    ull result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

// モジュラ逆数を計算する関数
ull modular_inverse(ull a, ull mod) {
    return modular_pow(a, mod - 2, mod);
}

int main() {
    ull n;
    cin >> n;

    ull digit_count = to_string(n).length();  // n の桁数
    ull power_10 = modular_pow(10, digit_count, MOD);

    // 等比数列の和の計算
    ull series_sum;
    if (power_10 == 1) {
        series_sum = n % MOD;
    } else {
        series_sum = (modular_pow(power_10, n, MOD) - 1 + MOD) % MOD;
        series_sum = (series_sum * modular_inverse(power_10 - 1, MOD)) % MOD;
    }

    // 繋げた数を計算
    ull result = (n % MOD * series_sum) % MOD;
    cout << result << endl;

    return 0;
}
