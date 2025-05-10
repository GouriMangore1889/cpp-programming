#include<iostream>
using namespace std;
bool isPalindrome(int x);
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        long rev=0;
        int n=x;

        while(n>0)
        {
            int r;
            r=n%10;
            rev = rev*10 + r;
            n=n/10;
        }
        if(rev==x)
           return true;
        else
           return false;
        
    }
};
int main()
{
	Solution S;
	cout<<"num=";
	int x;
	cin>>x;
	bool result;
	result = S.isPalindrome(x);
	cout<<"output : "<<result;
	
}
