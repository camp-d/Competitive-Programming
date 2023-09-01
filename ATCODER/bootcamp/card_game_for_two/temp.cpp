#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned num;
unsigned ans = 0;

std::cin >> num;

std::vector<unsigned> nums (num);

for(unsigned i = 0; i < num; i++){
    unsigned temp = 0;
    std::cin >> temp;
    nums[i] = temp;
}

std::sort(nums.begin(), nums.end(), std::greater<unsigned>());

for(unsigned i = 0; i < num; i++){
    if(i % 2 == 0){
        ans += nums[i];
    }
    else{
        ans -= nums[i];
    }
}

std::cout << ans << std::endl;

return 0;
}
