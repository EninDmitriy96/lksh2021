#include <iostream>

using namespace std;

int main()
{
    int n, evens[1005], evc, odds[1005], odc, a;
    evc = odc = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (!(a % 2)) {
            evens[evc] = a;
            evc ++;
        } else {
            odds[odc] = a;
            odc ++;
        }
    }
    for (int i = 0; i < odc; i ++) {
        cout << odds[i];
        if (i < odc - 1)
            cout << " ";
    }
    if (odc > 0)
        if (evc > 0)
            cout << " ";
        else
            cout << endl;
    for (int i = 0; i < evc - 1; i ++)
        cout << evens[i] << " ";
    if (evc > 0)
        cout << evens[evc - 1] << endl;
    return 0;
}
