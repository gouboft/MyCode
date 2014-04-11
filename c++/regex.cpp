#include <iostream>
#include <regex>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Usage:" << argv[0] << " RegexString Text" << endl;
        return 1;
    }
    
    std::regex reg(argv[1]);
    string text = argv[2];
    std::smatch match;
    bool ismatch;
    
//    getline(cin, text);
    ismatch = std::regex_search(text, match, reg, std::regex_constants::match_not_null);
    cout << (ismatch ? "Is Matched" : "No Matched") << endl;
    
    for (std::smatch::size_type i = 0; i < match.size(); i++) {
        cout << "Matched result: " << match[i].str() << endl << endl;
    }
    
    return 0;
    
}
