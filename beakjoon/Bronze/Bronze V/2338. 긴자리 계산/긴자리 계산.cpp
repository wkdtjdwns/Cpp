#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

struct BigNumber {
    struct numberString {
        bool isMinus;
        string absString, rev;
        int len;
        numberString(string x) {
            if (x[0] == '-') {
                isMinus = true;
                absString = x.substr(1);
                len = absString.length();
            }
            else {
                isMinus = false;
                absString = x;
                len = absString.length();
            }
            rev = absString;
            reverse(begin(rev), end(rev));
        }
    };

    numberString op1, op2;
    bool swapped = false;

    BigNumber(string a, string b) : op1(a), op2(b) {
        if (op1.len < op2.len ||
            (op1.len == op2.len && op1.absString < op2.absString)) {
            swap(op1, op2);
            swapped = true;
        }
    }

    string add(string sa, string sb) {
        string result = "";
        if (sa.length() < sb.length())
            swap(sa, sb);

        int alen = sa.length(), blen = sb.length();
        for (int i = blen;i < alen;i++)
            sb += '0';

        int carry = 0;
        for (int i = 0;i < alen;i++) {
            int x = sa[i] - '0', y = sb[i] - '0';
            int s = x + y + carry;
            carry = s / 10;
            s %= 10;
            result += s + '0';
        }

        if (carry) result += '1';
        return result;
    }

    void removeLeading0(string& str) {
        int len = str.length();
        int pos = 0;
        for (;pos < len;pos++)
            if (str[pos] != '0') break;

        if (pos == len) str = "0";
        else str = str.substr(pos);
    }

    string add() {
        string result = "";

        if (op1.isMinus == op2.isMinus) {
            result = add(op1.rev, op2.rev);
            reverse(result.begin(), result.end());
            removeLeading0(result);
            if (op1.isMinus == true && result != "0")
                result = '-' + result;
            return result;
        }

        string nine_complement = "";
        for (int i = 0;i < op1.len;i++)
            nine_complement += '0' + ('9' - op1.rev[i]);
        string tmp = add(nine_complement, op2.rev);

        for (int i = 0;i < op1.len;i++)
            result += '0' + ('9' - tmp[i]);
        reverse(result.begin(), result.end());
        removeLeading0(result);

        if (result == "0") return result;

        if (op1.isMinus == true)
            result = '-' + result;
        return result;
    }

    string sub() {
        bool b = op2.isMinus;
        op2.isMinus = !op2.isMinus;
        string result = add();
        op2.isMinus = !op2.isMinus;

        if (result == "0") return result;
        if (swapped == true) {
            if (result[0] == '-') return result.substr(1);
            else return '-' + result;
        }
        return result;
    }

    string mul(string x, int y) {
        string result = "";
        int carry = 0;

        for (int i = 0;i < x.length();i++) {
            int tmp = (x[i] - '0') * y + carry;
            result += '0' + (tmp % 10);
            carry = tmp / 10;
        }
        if (carry) result += '0' + carry;

        return result;
    }

    string mul() {
        string result = "";
        for (int i = 0;i < op2.len;i++) {
            if (op2.rev[i] == '0') continue;
            string zeros = "";
            for (int j = 0;j < i;j++)
                zeros += '0';
            string tmp = mul(op1.rev, op2.rev[i] - '0');
            tmp = zeros + tmp;
            result = add(tmp, result);
        }

        reverse(result.begin(), result.end());
        if (op1.isMinus != op2.isMinus) result = '-' + result;
        return result;
    }
};

int main() {
    string a, b; cin >> a >> b;

    if (b == "0") {
        cout << a << "\n";
        cout << a << "\n";
        cout << "0\n";
        return 0;
    }

    if (a == "0") {
        cout << b << "\n";
        cout << (b[0] == '-' ? b.substr(1) : '-' + b) << "\n";
        cout << "0\n";
        return 0;
    }

    BigNumber bn(a, b);
    cout << bn.add() << "\n";
    cout << bn.sub() << "\n";
    cout << bn.mul() << "\n";

    return 0;
}
