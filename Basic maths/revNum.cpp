#include<iostream>
#include<cmath>
using namespace std;
long long reversedBitsGFG(long long X) {
        // code here
        if(X>= __INT_MAX__){
        return X;
    }
    int i=31;
	long long ans=0;
	while(X!=0){
		int bit=X&1;
		ans=bit*pow(2,i)+ans;
		X=X>>1;
		i--;
	}
     return ans;
}
int reverseNumLeet(int x) {
        int ans=0;
        while(x != 0)
        {
            int digit= x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            {
                return 0;
            }
            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
}
int main(void)
{
    int num;
    cin>>num;
    cout<<"GFG"<<endl;
    cout<<reversedBitsGFG(num)<<endl;
    cout<<"Leet"<<endl;
    cout<<reverseNumLeet(num);
} // namespace std;
