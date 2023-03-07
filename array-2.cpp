#include <iostream>

using namespace std;

int main()
{
   int n, nums[200];
   cin >> n;

   for(int i = 0; i < n; i++)
        cin >> nums[i];

    bool increasing = 1;
   for(int i = 1; i < n; i++) {
        if (nums[i] < nums[i-1]) {
            increasing = 0;
            break;
        }
   }

   if(increasing)
        cout << "YES\n";
   else
        cout << "NO\n";
    return 0;
}
