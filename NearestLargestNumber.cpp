#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class PermutationFinder {
public:
    PermutationFinder(long a, long b) : originalNumber(a), compareNumber(b) {}

    long findSmallestGreater() {
        string strA = to_string(originalNumber);
        sort(strA.begin(), strA.end()); // Sort digits of a in ascending order

        do {
            long perm = stol(strA); // Convert permutation to a number
            if (perm > compareNumber) {
                return perm; // Return the first permutation that is greater than b
            }
        } while (next_permutation(strA.begin(), strA.end()));

        return -1; // Return -1 if no valid permutation is found
    }

private:
    long originalNumber;
    long compareNumber;
};

int main() {
    long a, b;
    cin >> a >> b;

    PermutationFinder finder(a, b);
    long result = finder.findSmallestGreater();

    cout << result << endl;

    return 0;
}