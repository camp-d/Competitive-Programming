#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

typedef long long ll;

void solve(){
	int blocks;

	std::cin >> blocks;

	std::vector<int> count (26, 0);
	std::vector<int> counts1 (26, 0);
	std::vector<int> counts2 (26, 0);

	std::vector<std::string> side1 (blocks);
	std::vector<std::string> side2 (blocks);

	for(int i = 0; i < blocks; i++){
		std::cin >> side1[i];
		std::cin >> side2[i];
	}


	for(int i = 0; i < blocks; i++){	
		for(auto x : side1[i])
		{
			counts1[x-97]++;
		}
		for(auto y : side2[i]){
			counts2[y-97]++;
		}
	for(int j = 0; j < 26; j++){
		count[j] += std::max(counts2[j], counts1[j]);
		counts1[j] = 0;
		counts2[j] = 0;
		}
	}

	for(auto x : count)
		std::cout << x << '\n';


}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("blocks.in","r",stdin);
std::freopen("blocks.out","w",stdout);

solve();

return 0;
}
