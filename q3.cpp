#include <iostream>
#include <ctime>
#include <iterator>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    multimap<int, int> dict1;
    unordered_multimap<int, int> dict2;

    vector<double> coll1;
    vector<int> nums;

    for(int run=0; run <= 2000000; run+=100000)
    {

        std::clock_t start_time1 = std::clock();
        for(int i = 0 ; i < run; i++)
        {
            //dict1.insert(pair<int, int>(i, i));
            dict2.insert(pair<int, int>(i, i));
        }
        std::clock_t tot_time1 = std::clock() - start_time1;
        auto oy = ((double) tot_time1) / (double) CLOCKS_PER_SEC;

        nums.push_back(run);
        coll1.push_back(oy);
    }

    for(int i = 0; i < coll1.size(); ++i)
        cout << coll1[i] << ", ";

    return 0;
}
