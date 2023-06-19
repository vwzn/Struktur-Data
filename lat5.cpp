#include <iostream>
#include <string>
using namespace std;

int a[5]={10,20,30,40,50};
int b[5]={1,2,3,4,5};
int c[2][2]={{10,20},{30,40}};

void larik(){
    int i, j;
    for (i=0;i<5;i++){
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    cout<<endl;
    for (i=0;i<5;i++){
        cout<<"b["<<i<<"]="<<b[i]<<endl;
    }
    cout<<endl;
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"c["<<i<<"]["<<j<<"]="<<c[i][j]<<endl;
        }
    }
}

int main()
{
    larik();
    return 0;
}
