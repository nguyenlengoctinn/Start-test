#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main() {
    double x;
    int d;
    if (cin >> x >> d) {
        // Hệ số nhân để làm tròn đúng d chữ số
        double scale = pow(10.0, d);
        double ans = round(x * scale) / scale;

        // Định dạng ra chuỗi d chữ số sau dấu phẩy
        stringstream ss;
        ss << fixed << setprecision(d) << ans;
        string s = ss.str();

        // Xóa các số 0 thừa và dấu '.' nếu thành số nguyên
        s.erase(s.find_last_not_of('0') + 1, string::npos);
        if (!s.empty() && s.back() == '.') {
            s.pop_back();
        }

        cout << s << "\n";
    }
    return 0;
}
