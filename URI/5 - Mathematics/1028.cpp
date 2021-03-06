#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <functional>
#include <utility>
#include <string>
#include <sstream>
using namespace std;

int gdb(int a, int b)
{
    int resto = 0;
    while(b != 0)
    {
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

int main()
{
    int n, a, b;
    
    cin >> n;
    while(n-- > 0)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", gdb(a, b));
    }
    return 0;
}
