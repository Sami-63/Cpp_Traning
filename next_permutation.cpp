#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={1,2,3,4};
//    sort(a,a+4);

    do{
        for(int i=0 ; i<4 ; i++ )
            cout << a[i] << " \n"[i==3];
    }while(next_permutation(a,a+4));

    cout << "After loop :\n"    ;
    for(int i=0 ; i<4 ; i++ )
        cout << a[i] << " \n"[i==3];

    cout << "\n\n";

    int b[]={4,3,2,1};

    do{
        for(int i=0 ; i<4 ; i++ )
            cout << b[i] << " \n"[i==3];
    }while(prev_permutation(b,b+4));

    cout << "After loop :\n"    ;
    for(int i=0 ; i<4 ; i++ )
        cout << b[i] << " \n"[i==3];

    return 0;
}
