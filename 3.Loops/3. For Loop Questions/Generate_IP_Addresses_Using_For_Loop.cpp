#include <iostream>
using namespace std;
int main(){
    

    for (int i = 0; i < 256; i++)
    {
        for (int j = 0; j < 256; j++)
        {
            for (int k = 0; k < 256; k++)
            {
                for (int l = 0; l < 256; l++)
                {
                    cout << i << "." << j << "." << k << "." << l << endl;
                }
            }
        }
    }
    return 0;
}