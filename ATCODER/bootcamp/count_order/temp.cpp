#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int size;
    
    std::cin >> size;

    std::vector<int> P(size);
    std::vector<int> Q(size);
    std::vector<int> B;

    int P_perm;
    int Q_perm;

    for(auto &x : P){
        std::cin >> x;
    }

    for(auto &x : Q){
        std::cin >> x;
    }

    B.assign(P.begin(), P.end()); 

    std::sort(B.begin(), B.end());

    int factorial = 1;

    for(int i = 1; i <= size; i++){
        factorial *= i;
    }


    for(int i = 0; i < factorial; i++){
        if(B == P)
            P_perm = i;
        if(B == Q)
            Q_perm = i;
        std::next_permutation(B.begin(), B.end());
    }

    std::cout << std::abs(P_perm-Q_perm) << std::endl;

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}
