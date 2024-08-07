#include <bits/stdc++.h>
#include "teleportation.h"
using namespace std;

void setIO(string name = "") {  // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);  // see Fast Input & Output
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);  // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    Teleportation tp; // Create an object of the Teleportation class
    tp.solve(); // Call the solve method
    return 0;
}