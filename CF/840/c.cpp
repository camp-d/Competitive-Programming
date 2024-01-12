#include<bits/stdc++.h>

typedef long long ll;

//template function for vector of any type
//takes const (immutable) reference as argument
template <class T> void print(const std::vector<T>& l){
    typename std::vector<T>::const_iterator i;
    for(i = l.begin(); i != l.end(); ++i){
        std::cout << *i << ",";
    }
    std::cout << "]\n";
}

void solve(){
    ll n = 0;
    std::cin >> n;
    std::vector<ll> a(n);
    for(auto &i:a)
        std::cin >> i;
    if (n == 2)
        std::cout << std::max({2 * std::abs(a[0] - a[1]), a[0] + a[1]});
    else if (n == 3)
        std::cout << std::max({3 * (std::abs(a[0] - a[1])), 3 * (std::abs(a[2] - a[1])), 3 * a[0], 3 * a[2], a[0] + a[1] + a[2]});
    else
    {
        ll mx = 0;
        for (auto i : a)
            mx = std::max(i, mx);
        std::cout << n * mx;
    }
       std::cout << "\n";
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

ll t; 
std::cin>>t; 
while(t--) 
    solve();

return 0;
}
#include <bits/stdc++.h>



