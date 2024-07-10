#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    
    int N;
    
    cin >> N;

    for (int i = 0; i < N; i++){
        cout << string(N-(i+1),' ') << string(2*i+1,'*') << string(N-(i+1),' ') << endl;
    }

    for (int i = N-1; i >= 1; i--){   
        cout << string((N-i),' ') << string(2*i-1,'*') << string((N-i),' ') << endl;
    }
    
	return 0; 
}
