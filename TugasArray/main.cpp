#include <iostream>

using namespace std;

int main()
{
    int s = 0, e = 1, f = 0, r = 2;
    int sky[3][2][2];
    float avg;

    for (int o = 0; o <3; o++){
        for (int b = 0; b < 2; b++){
            for (int n = 0; n < 2; n++){
                sky[o][b][n] = r;
                r += 2;
                cout << r << " ";
                f += r;
                s += e;
                avg = (float)f / s;
            }
        }
    }

        cout << endl;
        cout << "sum kelipatan 4 = "<< f <<endl;
        cout << "Rata-rata sum kelipatan 4 = " << avg <<endl;
    return 0;
}
