#include<bits/stdc++.h>

typedef long long ll;

void solve(){


    int n;

    std::cin >> n;

    std::vector<int> nums(n, 0);

    std::unordered_map<int, int> n2;

    int count = 0;
    int value;

    for(auto &x : nums){
        std::cin >> x;
        value = x;
        n2.insert(std::make_pair(value, count));
        count++;
    }

    int max = -1;

    for(int j {0}; j < (int)nums.size(); j++){
        max = -1;
        for(int i {0}; i < (int)nums.size(); i++){
            if( i != j){
                max = std::max(max, nums[i]);
            }
        }
        std::cout << max << '\n';
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
