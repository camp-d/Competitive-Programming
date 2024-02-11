#include<bits/stdc++.h>

typedef long long ll;

void enc(char* flag, int key){
    char *start = flag;
    while(*flag){
        key = key*13 + 37;
        *flag^=(key);
        *(flag++) += 3;
    }
    printf("%s\n", start);
}

void dec(char* flag, unsigned key){
    char *start = flag;
    //std::cout << "Key before xor:" << key << std::endl;
    while(*flag){
        *(flag) -= 3;
        key = key*13 +37;
        *flag = (*flag ^ key);
        flag++;
    }
    printf("%s\n", start);
    //std::cout << "Key after xor:" << key << std::endl;
}

void hex(){
    int x;
    std::vector<int> dec_message;
    std::string message;

    while(std::cin >> std::hex >> x){
        message.push_back((char)x);
        dec_message.push_back(x);
    }
    /*
    for(unsigned i = 0; i < 256; i++){
        std::string s2 = message;
        //enc(const_cast<char*>(s2.data()), i);
        dec(const_cast<char*>(s2.data()), i);
    }
    */
    for(unsigned i = 0; i < 4294967296; i++){
        std::string s2 = message;
        for(unsigned x = 0; x < s2.length(); x++){
            s2[x] ^= i;
        }
    std::cout << s2 << '\n' << i  << "/4,294,967,296" << '\n';
    }
}

int main()
{

std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

//char arr[] = {0x3C, 0xF7, 0xBF, 0x3C, 0xD9, 0x53, 0x49, 0x57, 0x33, 0x27, 0x68, 0xBA, 0x70, 0x28, 0x65};
//
//
//EMAIL: SOLVED ctf@raytheon.com

/* puzzle 1 -- SOLVED
 int first[12] = {0b01000110, 0b01101100, 0b01100001, 0b01100111, 0b00111101, 0b00110010, 0b01000101, 0b01011010, 0b00110000, 0b00110001, 0b00000000, 0b00000000};

    for(int i = 0; i < 12; i++){
        printf("%c", (char)first[i]);
    }
    printf("\n");

    */

/* Puzzle 2 -- SOLVED
for(unsigned i = 0; i < 256; i++){
    char arr[16] = {'\x3C', '\xF7', '\xBF', '\x3C', '\xD9', '\x53', '\x49', '\x57', '\x33', '\x27', '\x68', '\xBA', '\x70', '\x28', '\x65'};
    if(i == 66)
    dec(arr, i);
}

*/

hex();

return 0;
}
