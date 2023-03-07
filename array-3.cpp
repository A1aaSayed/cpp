#include <iostream>

using namespace std;

int main()
{
    const int N = 100;
    int n, arr[N], min_num = 10000, max_num = -1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < min_num) {
            min_num = arr[i];
        }
        if(arr[i] > max_num) {
            max_num = arr[i];
        }
    }

   for(int i = 0; i < n; i++) {
        if(arr[i] == min_num)
            arr[i] = max_num;

        else if (arr[i] == max_num)
            arr[i] = min_num;
   }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
