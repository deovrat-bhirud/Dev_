#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--){
        int n,t1,t2,t3=-3;
        cin >> n;
        long int a,b;
        for(int i=0;i<n;i++){
            int c;
            cin >> c >> a >> b;
            
            if(a>b) t1=a;
            else t1=b;
            if(c==1 || a==b ){
                t3=a;
                t2=2;
                cout << "YES" <<endl;  
            } 
            else if(t3==t1-1 && t2==1){
              cout << "YES" <<endl;
              t2=2;
            }   
            else{
                cout << "NO" <<endl;
            }
            t2--;
        }
    }
        return 0;
}
