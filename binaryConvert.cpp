#include<bits/stdc++.h>
using namespace std;
int main() {
    string binary;
    cin >> binary;

    int n = binary.size(); //range
    vector<int> power(n);

    int sum = 0;
    int x = 0; //power num
    /*int i = n - 1;

    for (i ; i >= 0; --i) { //compute
        power[i] = (binary[i] - '0') * (1 << x);
        sum = sum + power[i];
        x++;
    }
    cout << sum;*/

    //compute_2
    int i = 0;
    while (i < n) {
        sum = sum * 2 + (binary[i] - '0');
        i++;
    }
    cout << sum;

    /*while (i >= 0){
        power[i] = (binary[i] - '0') * (1 << x);
        i--;
        x++;
    }

    int j = n - 1;
    while (j >= 0){
        sum = sum + power[j];
        j --;
    }
    cout << sum;*/
    

    return 0;
}