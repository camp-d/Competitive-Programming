#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdio>

typedef long long ll;

void solve(){

    int sensors = 0;

    std::cin >> sensors;

    std::vector<std::string> segment_types;

    std::vector<int> sens_min (sensors);
    std::vector<int> sens_max (sensors);

    int start_min = 0;
    int start_max = 1e9;


    for(int i = 0; i < sensors; i++){
        std::string seg;
        int min, max;

        std::cin >> seg;
        segment_types.push_back(seg);

        std::cin >> min >> max;
        sens_min[i] = min;
        sens_max[i] = max;
    }


    for(int i = sensors-1; i >= 0; i--){
        if(segment_types[i] == "none"){
                start_min = std::max(sens_min[i], start_min);
                start_max = std::min(sens_max[i], start_max);
        }
        else if(segment_types[i] == "on"){
            start_min -= sens_max[i];
            start_max -= sens_min[i];
            start_max = std::max(0,start_max);
        }
        else if(segment_types[i] == "off"){
            start_max += sens_max[i];
            start_min += sens_min[i];
        }
    }

    std::cout << start_min << ' ' << start_max << '\n';

    start_min = 0;
    start_max = 1e9;

    for(int i = 0; i < sensors; i++){
        if(segment_types[i] == "none"){
                start_min = std::max(sens_min[i], start_min);
                start_max = std::min(sens_max[i], start_max);
        }
        else if(segment_types[i] == "on"){
            start_min += sens_min[i];
            start_max += sens_max[i];
        }
        else if(segment_types[i] == "off"){
            start_max -= sens_min[i];
            start_min -= sens_max[i];
            start_max = std::max(0,start_max);
        }
    }

    std::cout << start_min << ' ' << start_max << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("traffic.in","r",stdin);
std::freopen("traffic.out","w",stdout);

solve();

return 0;
}
