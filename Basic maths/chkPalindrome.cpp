#include<iostream>
#include<sstream>
using namespace std;
string is_palindromeNumGFG(int n){
		stringstream st;
		    st<<n;
		    string s;
		    st>>s;
		    int j = s.length()-1;
		    int i =0;
		    while(i<=j){
		        if(s[i]!=s[j])
		            return "No";
		        i++;
		        j--;
		    }
		    return "Yes";
}
int RevNum (int x){
    long int rev = 0;
    while(x>0){
        int rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }        return rev;
}
bool isPalindromeNumLeet(int x){
        int temp = x;
        int revNum = RevNum(x);
        if(revNum==temp){
            return true;
        }
        return false;
}
int main(void){
    int num;
    cin>>num;
    cout<<"GFG"<<endl;
    cout<<is_palindromeNumGFG(num)<<endl;
    cout<<"LeetCode"<<endl;
    cout<<boolalpha;
    cout<<isPalindromeNumLeet(num);
}