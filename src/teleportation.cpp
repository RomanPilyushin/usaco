//https://usaco.org/index.php?page=viewproblem2&cpid=807
//https://usaco.guide/problems/usaco-807-teleportation/solution

// int main() {
//     setIO();
//     Teleportation tp; // Create an object of the Teleportation class
//     tp.solve(); // Call the solve method
//     return 0;
// }



#include "teleportation.h"
#include <bits/stdc++.h>
using namespace std;

void Teleportation::solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int dist = abs(a - b);  // calculate the distance without travel
    dist = min(dist, abs(a - c) + abs(b - d));
    dist = min(dist, abs(a - d) + abs(b - c));

    cout << dist << endl;
}

