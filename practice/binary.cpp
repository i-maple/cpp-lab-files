#include<iostream>
#include<string.h>

using namespace std;

class BinaryC{
    public:
        static float convertDecimalToBinary(int decimal){
            int temp = decimal;
            int digit;
            int finalBin = 0;
            while(temp != 0){
                digit = temp % 2;
                finalBin = (finalBin * 10) + digit;
                temp /= 2;
            }
            return reverse(finalBin);
        }

        int findEx3(int num){
            int digit, finalEx3 = 0, binVal;
            while (num!= 0)
            {
                digit = (num % 10);
                binVal = convertDecimalToBinary(digit);
                cout<<"flag binval"<<binVal<<endl;
                finalEx3 = (finalEx3*1000 ) + binVal;
                num /= 10;
            }

            return finalEx3;
            
        }

        static int reverse(int num){
            int dig, no;
            while(num!=0){
                dig = num % 10;
                no = (no * 10) + dig;
                num /= 10;
            }
            return no;
        }
};

int main(){
    BinaryC bin;
    cout<<bin.convertDecimalToBinary(3)<<endl;
    float dig = bin.convertDecimalToBinary(3);
    cout<<dig;
}
