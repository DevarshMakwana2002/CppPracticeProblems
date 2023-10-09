#include <iostream>
using namespace std;

void solve()
{
    int jn, gm, k;
    cin >> jn >> gm >> k;
    int jar[jn];
    int gar[gm];
    int minj = -1, maxj = 0;
    int ming = -1, maxg = 0;
    long long sumj = 0;
    long long sumg = 0;
    for (int i = 0; i < jn; i++)
    {
        cin >> jar[i];
        if (jar[i] < minj || minj < 0)
        {
            minj = jar[i];
        }
        if (jar[i] > maxj)
        {
            maxj = jar[i];
        }
        sumj += jar[i];
    }
    for (int i = 0; i < gm; i++)
    {
        cin >> gar[i];
        if (gar[i] < ming || ming < 0)
        {
            ming = gar[i];
        }
        if (gar[i] > maxg)
        {
            maxg = gar[i];
        }
        sumg += gar[i];
    }
    /////////////////////////////////////////
    int temp = 0;
    if (k % 2 == 0)
    {
        temp = 2;
    }
    else {
        temp = 1;
    }
    
    for (int i = 1; i <= temp; i++)
    {
        if (i % 2 == 0)
        {
            sumg = sumg + maxj - ming;
            sumj = sumj - maxj + ming;
            if (maxj > maxg)
            {
                maxg = maxj;
            }
            if (ming < minj)
            {
                minj = ming;
            }
        }
        if (i % 2 != 0 && maxj<maxg)
        {
            sumj = sumj + maxg - minj;
            sumg = sumg + minj - maxg;
            if (maxg > maxj)
            {
                maxj = maxg;
            }
            if (minj < ming)
            {
                ming = minj;
            }
        }
    }
    cout << sumj << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        solve();
        t--;
    }

    return 0;
}

// k = 2

// int jr = [4,5,11,1]   total = 21 min=1 max=11
// int gr = [1,2,1,9]   total = 13  min=1 max=9

// {
//     k = 1
//     jr = [4,5,11,9] total = 29 min=1 max=11
//     gr = [1,2,1,1]   total = 5 min=1 max=9

//     k = 2
//     jr = [4,5,1,9] total = 19  min = 1 max=11
//     gr = [1,2,1,11]   total = 15 min=1 max=11

//     k=3
//     jr = [4,5,11,9] total = 31
//     gr = [1,2,1,1]   total = 5
// }