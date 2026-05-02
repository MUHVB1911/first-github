#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // عشان الرقم يكون عشوائي كل مرة
    int secretNumber = rand() % 100 + 1; // رقم من 1 لـ 100
    int guess;
    int tries = 0;

    cout << "🎮 لعبة تخمين الرقم!\n";
    cout << "خمن رقم بين 1 و 100:\n";

    do {
        cout << "ادخل تخمينك: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "🔽 الرقم أصغر!\n";
        } else if (guess < secretNumber) {
            cout << "🔼 الرقم أكبر!\n";
        } else {
            cout << "🎉 صح! انت كسبت في " << tries << " محاولة!\n";
        }

    } while (guess != secretNumber);

    return 0;
}