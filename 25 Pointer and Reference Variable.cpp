using namespace std;

int main() {
    int gamma = 15;
    int* intPtr = gamma;

    *intPtr = 20;

    int alpha = 20;
    int& intRef = alpha;

    intRef = 25;
    return 0;
}
