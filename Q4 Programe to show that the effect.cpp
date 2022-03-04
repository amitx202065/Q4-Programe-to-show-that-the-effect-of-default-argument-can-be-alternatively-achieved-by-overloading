//Q4 Programe to show that the effect of default argument can be alternatively achieved by overloading //
#include<bits/stdc++.h>
using namespace std;

class Power     
{
public:
    int n;
    int m;
    int result=1;
  void raise(int m,int n)
    {
        for(int i=1;i<=n;i++)
            {
                result=result*m;
            }
        display();
    }
    Power (int m,int n)      //CONSTRUCTOR 1
    {  
        raise(m, n);
        
    }
    Power (int m)            //CONSTRUCTOR 2
    {    
        const int n=2;
        raise(m, n);
        
    }
    

    
    void display()
    {
        cout<<"Result Getting is  "<<result;
    }
    
};

int main()        
{        
    
    int m;
    int n;
    cout<<"M and N is"<<endl;
    cin>>m;
    Power A(m);
    return 0;
}
