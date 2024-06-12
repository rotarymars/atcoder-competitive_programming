MOD = 998244353

def mod_pow(base, exponent, mod):
    result = 1
    base = base % mod
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % mod
        exponent = exponent >> 1
        base = (base * base) % mod
    return result

def calculate_Vn_mod(N):
    len_N = len(str(N))
    r = mod_pow(10, len_N, MOD)
    S = (1 - mod_pow(r, N, MOD)) * mod_pow(1 - r, MOD - 2, MOD)
    S = S % MOD
    Vn_mod = (N * S) % MOD
    return Vn_mod
print(calculate_Vn_mod(int(input())))
