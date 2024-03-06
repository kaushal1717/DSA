#include<iostream>
using namespace std;
int main(void) {
   string str = "abcoirfkjenfndcjn";
   int hash[27] = {0};
//    char s[str.size()];
//    for (size_t i = 0; i < str.length(); i++)
//    {
//         s.push_back(str[i]);
//    }
   
   for (size_t i = 0; i < str.length(); i++)
   {
        hash[str[i] - 'a'] += 1;
   }
   char c;
   cin >> c;
   cout << hash[c-'a'] << endl;
}