#include <vector>
#include <algorithm>
#include <iostream>




typedef long long ll;

void solve(){

	int room_count;


	std::cin >> room_count;

	std::vector<int> rooms(room_count);

	
	for(auto &x: rooms){
		std::cin >> x;
		
	}
	int min_dist = 1e9;

	for(std::vector<int>::iterator it = rooms.begin(); it != rooms.end(); it++){
		int room_dist = 0;
		int total_dist = 0;
		for(auto jt = it+1; jt != it; jt++)
		{
			if(jt == rooms.end()){

				jt = rooms.begin();
			}
			if(jt == it){
				break;
			}

			room_dist++;

			total_dist += room_dist * *jt;

		}
		min_dist = std::min(total_dist, min_dist);

	}

	std::cout << min_dist << '\n';

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("cbarn.in","r",stdin);
std::freopen("cbarn.out","w",stdout);

solve();

return 0;
}
