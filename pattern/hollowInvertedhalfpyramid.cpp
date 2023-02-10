//  hollow INverted half pyramid


// ***********
// *        *
// *       *
// *      *
// *     *
// *    *
// *   *
// *  *
// * *
// **
// *

#include <iostream>
using namespace std;

int main()
{
    
   int n;
   cin>>n;
    for(int row=0; row<=n; ++row)
    {
        for(int col=row; col<=n; ++col)
        {
            if((row==0) || (col==row) || (col==n))
            {
                cout<<"*";
            }
            else
            {
                //Print space
                cout<<" ";
            }
        }
        cout<<endl;
    }
}