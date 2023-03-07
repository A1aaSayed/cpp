#include <iostream>

using namespace std;

int main()
{
    int n, arr[200];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n - 1 - i]) {
            cout << "NO\n";
        }
    }
    cout << "YES\n";
    return 0;
}
