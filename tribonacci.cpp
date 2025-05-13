#include<iostream>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
           return 0;
        if(n==1)
           return 1;
        if(n==2)
           return 1;
        int m=3;
        int f[38];
        f[0]=0;
        f[1]=1;
        f[2]=1;
        while(m<=n)
           {
             f[m]=f[m-1]+f[m-2]+f[m-3];
             m++;
           }
        return f[n];
    }
};
int main()
{
	int n;
	cout<<"enter the index:";
	cin>>n;
	Solution s;
	int result=s.tribonacci(n);
	cout<<"tribonacci at index "<<n<<" is "<<result;
	}
