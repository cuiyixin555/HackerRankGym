#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <limits>

using namespace std;

/**
4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value
*/

// How to build: g++ -std=c++17 -Wall -o Attribute_Parser Attribute_Parser.cpp
// How to run: ./Attribute_Parser

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    unordered_map<string, string> attrs;
    vector<string> path;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        // protect from windows '\n'
        if (!line.empty() && line.back() == '\r')
            line.pop_back();
        if (line.empty())
            continue;

        if (line[1] == '/') {
            // </tag>
            if (!path.empty())
                path.pop_back();
        } else {
            // open tag: inner line
            string inner = line.substr(1, line.size() - 2);

            stringstream ss(inner);
            string tagName;
            // tag1 value = "HelloWorld"
            ss >> tagName;

            string fullPath;
            for (const string &p : path)
                fullPath += p + ".";
            fullPath += tagName;

            string attrName, eq, value;
            while (ss >> attrName >> eq >> value) {
                // remove ""
                if (value.size() >= 2 && value.front() == '"' && value.back() == '"')
                    value = value.substr(1, value.size() - 2);
                attrs[fullPath + "~" + attrName] = value;
            }

            path.push_back(tagName);
        }
    }

    for (int i = 0; i < q; ++i) {
        string query;
        cin >> query;
        auto it = attrs.find(query);
        if (it != attrs.end())
            cout << it->second << "\n";
        else
            cout << "Not Found!" << "\n";
    }
    return 0;
}