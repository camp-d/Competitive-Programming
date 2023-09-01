#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

int n, k;

std::cin >> n >> k;

std::vector<int> x (n);

int distance = 0;
for(int i = 0; i < n; i++){
    int temp = 0;
    std::cin >> temp;
    x[i] = temp;
}
for(int i = 0; i < n; i++){
    distance += 2 * std::min(x[i], std::abs(x[i]-k));
}
std::cout << distance << std::endl;

return 0;
}
