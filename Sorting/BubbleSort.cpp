#include<iostream>
#include<vector>
using namespace std;

class Sorts {
private:
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
public:
    void bubbleSort(vector<int>& ans) {
        //check every adjacent element and swap if smaller 
        int n = ans.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (ans[j] > ans[j + 1]) {
                    swap(ans[j], ans[j + 1]);
                }
            }
        }
    }
};

int main() {
    vector<int> ans = {13, 46, 24, 52, 20, 9};
    Sorts obj; // creating an object for this class - Instantiation
    obj.bubbleSort(ans);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
