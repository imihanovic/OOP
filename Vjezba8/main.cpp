#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;


int main() {
    vector<timer> v = { {2, 6, 9.118}, {2, 6, 15.251}, {2, 6, 9.925}, {2, 7, 15.222}, {2, 7, 10.775} };

    // prosjecno vrijeme
    timer avg;
    for (auto t : v) {
        avg += t;
    }
    avg /= v.size();
    cout << "avg " << avg << endl;
    // vrijeme najbrzeg (operator<)
    timer tmax = *min_element(v.begin(), v.end());
    cout << "min " << tmax << endl;
    // zaostajanje za vodecim u sekundama
    cout << "Delay behind the leader:" << endl;
    for (auto& tm : v)
        cout << double(tm - tmax) << endl;
    // penaliziranje vozaca s m sekundi (funkcijski objekt)
    penalty p(5);
    for (auto& tm : v)
        p(tm);
}