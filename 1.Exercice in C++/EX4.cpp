#include <iostream>
#include <vector>

using namespace std;

template<typename T> T maxValeur(T a, T b) {
    if (a > b) {
        return a;
    }
}
template<typename T> T maxValeur(const vector<T>& v) {
    T max = v[0];
    for (const T& i : v) {
        if (i > max) {
            max = i;
        }
    };
    return max;
}
int main()
{
    int a1 = 12, b1 = 18;
    float a2 = 20.5, b2 = 15.2;
    vector<int>v1 = { 2,3,4,6,1,9,5 };
    vector<float>v2 = { 12.4,11.5,4.6,3.7,16.4,9,5 };

    cout << "la valeur la plus grand entre " << a1 << " et " << b1 << " est : " << maxValeur(a1, b1) << endl;
    cout << "la valeur la plus grand entre " << a2 << " et " << b2 << " est : " << maxValeur(a2, b2) << endl;

    cout << "la valeur la plus grand dans la vecteur 1 est : " << maxValeur(v1) << endl;
    cout << "la valeur la plus grand dans la vecteur 2 est : " << maxValeur(v2) << endl;

    return 0;
}