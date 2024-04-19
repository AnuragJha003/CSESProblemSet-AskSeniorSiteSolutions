#include<iostream>

using namespace std;

string modify_str(string s) {
	int l = 1, r = s.size()-1;
	while (l < r-1) {
		swap(s[l-1], s[l]);
		l+=1;
		swap(s[r-1], s[r]);
		r-=1;
	}
	return s;
}

bool check_palindrome(string s){
    int l = 0, r = s.size()-1;
    while (l < r){
        if (s[l] != s[r])
            return false;
        l++; r--;
    }
    return true;
}

int check(string s1, string s2){
    if (check_palindrome(s1) && s1 != s2)
        return true;
    return false;
}

int main(){
    long t; cin >> t; cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        string s_tmp = s;
        if (check(modify_str(s), s_tmp))
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
        s = "\0";
    }

    return 0;
}