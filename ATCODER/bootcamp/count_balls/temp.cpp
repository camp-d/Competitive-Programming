#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    unsigned long long N, A, B, ans = 0;

    std::cin >> N >> A >> B;

    unsigned long long segmnent = A+B;

    unsigned long long segments = N/(A+B);
    unsigned long long leftover = N%(A+B);

    ans = segments*A;

    if(leftover >= A){
        ans += A;
    }
    else
        ans = ans + leftover;

    std::cout << ans << "\n";

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();


return 0;
}
