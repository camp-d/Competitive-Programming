#include<bits/stdc++.h>

typedef long long ll;
//template function for vector of any type
//takes const (immutable) reference as argument
template <class T> void print(const std::vector<T>& l){
    typename std::vector<T>::const_iterator i;
    std::cout << "[";
    for(i = l.begin(); i != l.end(); ++i){
        std::cout << *i << ", ";
    }
    std::cout << "]\n";
}

void solve(){
    unsigned size;
    unsigned max = 0;
    unsigned min = 0;
    unsigned set = 0;
    std::cin >> size;
    std::vector<unsigned> arr;
    unsigned element;
    for(unsigned i = 0; i < size; ++i){
        std::cin >> element;
        arr.push_back(element);
        if(!set){
            max = element;
            min = element;
            set = 1;
        }
        else{
            max |= element;
            min &= element;
        }
    }
    std::cout << max-min << std::endl;
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
