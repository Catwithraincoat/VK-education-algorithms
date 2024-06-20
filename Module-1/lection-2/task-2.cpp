#include <iostream>
#include <vector>

int main() {
    using namespace std;

    int n;
    int count = 0;
    int My_array[n];
    vector<int> My_array2;

    cin >> n;

    for(int i=0;i < n; ++i){
        cin>>My_array[i];
    }


    for(int i=0; i < n; ++i){
        if(My_array[i] != 0){
            My_array2.push_back(My_array[i]);
        }
        else {count++;}
    }




    for (int i = 0; i != My_array2.size(); ++i) {
        cout << My_array2[i] << " ";
    }

    for (int i=0; i < count; ++i){
        cout << 0 << " ";
    }

    return 0;
}
