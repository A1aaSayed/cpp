#include <iostream>

using namespace std;

int main()
{
    int n, a[200];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int smallest = 10000;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int result = a[i] + a[j] + j - i;
            if(result < smallest)
                smallest = result;
        }
    }
    cout << smallest;


    return 0;
}
