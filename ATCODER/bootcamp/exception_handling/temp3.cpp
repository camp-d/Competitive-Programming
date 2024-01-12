#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n;

    std::cin >> n;

    std::vector<std::pair<int, int>> nums(n);

    int count = 0;
    int max = -1;

    for(auto &x : nums){
        std::cin >> x.first;
        x.second = count;
        count++;
        std::cout << x.first << '\n';
    }

    std::vector<std::pair<int,int>> num2(nums);

    std::sort(nums.begin(), nums.end());

    for(int j {0}; j < (int)nums.size(); j++){

    }

    for(auto x : nums){
        std::cout << "value:" << x.first << " index: " << x.second << '\n';
    }

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
