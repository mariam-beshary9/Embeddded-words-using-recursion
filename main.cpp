/**
    Purpose : This program is created to find embedded words of a word
    Author  : Mariam Ahmad Amin Beshary
    Description : This program depends on the ideas of a truth table
            : if we if we simulated the word as a truth table it would produce different words it's number = 2^n -1

            ( It is similar to the way we convert decimal to binary by subtracting)

  A B C                          3       2       1      0
  1 1 1 = A B C                 2       2       2      2
  1 1 0 = A B
  1 0 1 = A   C                 A       B       C      D
  1 0 0 = A
  0 1 1 =   B C
  0 1 0 =   B
  0 0 1 =     C
  0 0 0 =





**/

#include <iostream>
#include <cmath>
using namespace std;
/// p represents the numbers we present the words with . P: Range is from zero to 2^(size of the word ) -1
string  embedded (string word ,int p );

int main()
{
string word ;
cout<< "Enter the word to get it's embedded words: "<<endl ;
cin>>word ;
int p= pow (2,word.size());
cout<<"____________________"<<endl;
embedded (word ,p );

    return 0;
}

string  embedded (string word ,int p ){
/// the new number
int c=p;
/// Base case when the number i present = zero
if ( c == 0 ) cout<<" ";

else {
        /// we loop the word
        for (int i =0 ; i<word.size() ; i++ ){
        /// if the number is greater than number of our index or equal, we cout the char of the index and subtract it to find the characters
        if (c>pow(2,word.size()-i-1)){
            cout<< word[i];

            c-=pow(2,word.size()-i-1);

        }

}
/// it illustrates the words separately
cout<<endl ;
/// we get the new number
return embedded (word , p-=1 ) ;
}


}
