#include <iostream>

int main() {
    using namespace std;

    int n;
    int element;
    int count = 0;
    int My_array[n];

    cin >> n;

    for(int i=0;i<n;++i){
        cin>>My_array[i];
    }

    cin >> element;

    for(int i=0; i<n; ++i){
        if(My_array[i] != element){
            count++;
        }
    }

    cout << count;
    return 0;
}
