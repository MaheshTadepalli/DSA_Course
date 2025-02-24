string mod(string a , string b){
    while(a.length() >= b.length() && a.substr(0,b.length()) == b)
        a= a.substr(b.length());
    return a;
}

string f_gcd(string a , string b){
    if(b == ""){
        return a;
    }
    string mds = mod(a, b);
    if(mds.length() >= b.length())
        return "";
    return f_gcd(b, mds);
}

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.length() > str2.length())
            return f_gcd(str1, str2);
        return f_gcd(str2, str1);
    }
};
