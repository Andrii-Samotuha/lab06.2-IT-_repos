

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int n, const int Low, const int High) {
    for (int i = 0; i < n;i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void print(int* a, const int n) {
    for (int i = 0; i < n; i++) {
        cout << setw(4) << a[i];
        
    }
    cout << endl;
}
double AverageMinMax(int* a, const int n) {

    int min = a[0];
    int max = a[0];

    for (int i = 0; i < n;i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
            
        
    }
    return (1.0*(min + max) )/ 2;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    const int Low = -20, High = 20;
    int a[n];

    create(a, n, Low, High);
    print(a, n);

    cout << AverageMinMax(a, n);
}

