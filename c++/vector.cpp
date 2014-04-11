#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num[10];
    int i;
    vector<int> vec;

    for (i = 0; i < 10; i++)
        vec.push_back(i);

    vector<int>::iterator it = vec.begin();
    it += 3;
    int arr[] = {
        100, 200, 300
    };
    vec.insert(it, arr, arr+3); //insert 3 items

    it = vec.begin();
    vec.erase(it, it+3); // delete the 3 items at begin
    vec.pop_back(); // delete the last item
    while (it != vec.end()) {
        cout << "vec[" << *it << "] = " << *it << endl;

        it++;
    }
    cout << "Size of vec: " << vec.size() << endl;
    return 0;
}
