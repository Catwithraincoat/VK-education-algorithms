#include <iostream>
#include <vector>

int main() {
    using namespace std;

    int n;
    cin >> n;

    vector<int> My_array(n);

    for(int i = 0; i < n; ++i) {
        cin >> My_array[i];
    }

    for (int i = 1; i < n; i++) {
        const int key = My_array[i];
        int j = i - 1;
        while (j >= 0 && My_array[j] > key) {
            My_array[j + 1] = My_array[j];
            j--;
        }
        My_array[j + 1] = key;
    }

    for(int i = 0; i < n; ++i) {
        cout << My_array[i] << " ";
    }


    return 0;
}
