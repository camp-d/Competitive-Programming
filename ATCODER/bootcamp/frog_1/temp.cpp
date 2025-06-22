#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>

typedef long long ll;
const int INF = 1e+7;

int solve(std::vector<int>::iterator it, std::vector<int>& stones, std::vector<int>& costdp){

    int index = std::distance(stones.begin(), it);

    if(it == stones.end() || it+1 == stones.end())
            return 0;
    else
    {
        int cost1 = std::abs(*it - *(it+1));
        int cost2 = std::abs(*it - *(it+2));

        if(it+2 == stones.end()){
            costdp.at(index) = cost1;
            return cost1;
        }

        if(costdp.at(index) == INF){
            costdp.at(index) = std::min(cost1+solve(it+1, stones, costdp),cost2+solve(it+2, stones, costdp));
            return costdp.at(index);
        }
        else{
            return costdp.at(index);
        }
    }
}

int itersolve(std::vector<int>& stones, std::vector<int>& cost, int size)
{
    cost.at(0) = 0;

    for(int i = 0; i < size - 1; i++)
    {
        cost.at(i+1) = std::min(cost.at(i+1), cost.at(i) + std::abs(stones.at(i) - stones.at(i+1)));
        if(i + 2 < size){
            cost.at(i+2) = std::min(cost.at(i+2), cost.at(i) + std::abs(stones.at(i) - stones.at(i+2)));
        }
    }
    return cost.at(size-1);
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

int size;

std::cin >> size;

std::vector<int> stones (size);
std::vector<int> cost (size, INF);

for(auto &x : stones)
    std::cin >> x;

//std::cout << solve(stones.begin(),stones, cost) << '\n';
std::cout << itersolve(stones, cost, size) << '\n';
}
