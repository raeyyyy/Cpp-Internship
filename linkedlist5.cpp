#include <iostream>
#include <list>

using namespace std;

int main() {
    int num1, num2;
    list<int> l = {1, 2, 1, 3, 4, 1};
    list<int> l1 = {1, 3, 4, 3, 8, 3};

    do {
        cout << "Enter" << endl
             << "1 to reverse fn" << endl
             << "2 to sort fn" << endl
             << "3 to unique fn" << endl
             << "4 to empty fn" << endl
             << "5 to size fn" << endl
             << "6 to clear fn" << endl
             << "7 to merge fn" << endl
             << "8 to exit" << endl;
        cin >> num1;

        switch (num1) {
            case 1:
                l.reverse();
                for (int i : l) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 2:
                l.sort();
                for (int i : l) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 3:
                l.unique();
                for (int i : l) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 4:
                if (l.empty()) {
                    cout << "List is empty, please insert 5 elements: " << endl;
                    for (int i = 0; i < 5; i++) {
                        cin >> num2;
                        l.push_back(num2);
                    }
                } else {
                    cout << "List is not empty" << endl;
                }
                for (int i : l) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 5:
                cout << "Size of the list is " << l.size() << endl;
                break;
            case 6:
                l.clear();
                cout << "List is cleared" << endl;
                break;
            case 7:
                l.merge(l1);
                cout << "List elements after merge: " << endl;
                for (int i : l) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            case 8:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    } while (num1 >= 1 && num1 < 8);

    return 0;
}
                     