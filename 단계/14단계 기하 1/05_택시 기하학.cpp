#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int r;
    
    scanf("%d", &r);
    printf("%.6lf\n", r * r * 3.14159265358979323846);
    printf("%.6lf\n", (double)2 * r * r);

    return 0;
}
