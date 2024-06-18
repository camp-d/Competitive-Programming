#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n;

    std::cin >> n;

    std::unordered_set<std::string> said_words;

    std::string word1, word2;

    std::cin >> word1;

    said_words.insert(word1);
    while (std::cin >> word2){
        //std::cout << word1 << " " << word2 << std::endl;
        if(said_words.contains(word2) || word2.at(0) != word1.at(word1.length()-1)){
            std::cout << "No\n";

            /*
        if(said_words.contains(word2))
            std::cout << word2 << " has been said before\n";
        if(word2.at(0) != word1.at(word1.length()-1))
            std::cout << word1 << " " << word2 << " " << word1.at(word1.length()-1) << " " << word2.at(0) << std::endl;

            */
            return;
        }

        said_words.insert(word2);
        word1 = word2;
    }

    std::cout << "Yes\n";

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();
}
