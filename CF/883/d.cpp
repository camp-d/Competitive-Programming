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
    ll n, i, j, x, y;
    std::cin >> n, i, j, x, y;

    std::vector<ll> nums(n);
    std::iota(nums.begin(), nums.end(), 1);

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



