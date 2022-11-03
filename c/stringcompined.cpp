#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    
    int len1=a.size();
    int len2=b.size();
    cout<<len1<<" "<<len2<<endl;
    cout<<a+b<<endl;
    char q=a[0];
    char r=b[0];
    a[0]=r;
    b[0]=q;
    
    cout<<a+b;
    
    return 0;
}