#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned u32;

//template function for vector of any type
//takes const (immutable) reference as argument
template <class T> void print(const std::vector<T>& l){
    typename std::vector<T>::const_iterator i;
    for(i = l.begin(); i != l.end(); ++i){
        std::cout << *i << ",";
    }
    std::cout << "\n";
}

void solve(){
    u32 monsters;
    int attack_dmg;
    std::cin >> monsters;
    std::cin >> attack_dmg;

    std::vector<int> monsh(monsters);
    std::vector<u32> monsp(monsters);

    for(auto &i : monsh)
        std::cin >> i;
    for(auto &i : monsp)
        std::cin >> i;

    std::vector<int> ord(monsters);
    std::iota(ord.begin(), ord.end(), 0);
    std::sort(ord.begin(), ord.end(), [&](auto x, auto y) { return monsp[x] < monsp[y];});


    int dmg = 0;
    bool f = true;
    for(int i : ord){
        if(monsh[i] <= dmg)
            continue;
        if(i != ord[0])
            attack_dmg -= monsp[i];
        if(attack_dmg > 0){
            dmg += attack_dmg;
            while(monsh[i] > dmg){
                attack_dmg -= monsp[i];
                if(dmg < 0)
                    break;
                dmg += attack_dmg;
            }
        }
        if(monsh[i] > dmg){
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
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
