#include<iostream>
using namespace std;
bool check(int a) {
    int r, sum = 0, temp, count = 0;
   

    for (temp = a; a != 0; a = a / 10) {
        r = a % 10;
        sum = sum * 10 + r;
    }
    if (temp == sum)
        return true;
    else
        return false;
}
int main() {
	int A, B,n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        cin >> A >> B;
        for (int j = A; j <= B; j++)
        {
            if (check(j) == true)
                count++;
        }
        cout << count << endl;
    }
   
    return 0;
}