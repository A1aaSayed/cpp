#include <iostream>

using namespace std;

int main()
{
    int n, q, nums[200];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> q;
    while(q > 0) {
            int key;
            cin >> key;

            int pos = -1;
            for(int i = n-1; i >= 0; i--) {
                if(key == nums[i]) {
                    pos = i;
                    break;
                }
            }
            cout << pos << endl;
            q--;
    }
    return 0;
}
