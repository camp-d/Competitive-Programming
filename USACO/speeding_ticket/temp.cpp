#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

void solve(){

    int limits_num, speeds_num;

    std::cin >> limits_num >> speeds_num;

    std::vector<std::vector<int>> speeds (speeds_num, std::vector<int>(2, 0));
    std::vector<std::vector<int>> limits (limits_num, std::vector<int>(2, 0));
    
    int c = 0;
    for(auto &x : limits){
        int a, b;
        std::cin >> a >> b;
        c+=a;
        x[0] = c;
        x[1] = b;
    }
    c = 0;
    for(auto &x : speeds){
        int a, b;
        std::cin >> a >> b;
        c+=a;
        x[0] = c;
        x[1] = b;
    }

    int max_deviation = 0;
    int limit = limits[0][1];
    int speed = speeds[0][1];
    int speed_index = 0;
    int limit_index = 0;

    for(int i = 0; i < 100; i++){
        if(i > speeds[speed_index][0]){
            speed_index++;
            speed = speeds[speed_index][1];
        }
        if(i > limits[limit_index][0]){
            limit_index++;
            limit = limits[limit_index][1];
        }
        max_deviation = std::max(max_deviation, speed-limit);
    }
 
    std::cout << max_deviation << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("speeding.in","r",stdin);
std::freopen("speeding.out","w",stdout);

solve();

return 0;
}
