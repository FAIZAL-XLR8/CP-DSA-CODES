#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){ 
    string str;
    getline ( cin , str );
    stringstream ss (str);
    vector < string > v;
    string temp ;
    while ( ss>> temp ){//element uthta hai isse 
    v.push_back( temp ); 
    }
//print vector
// for( int i = 0; i< v.size() ; ++i)
// cout<< v[i]<< endl;
sort (v.begin(),v.end() );
int ctr = 1;
int max=0;
for( int i = 0 ; i < v.size() -1; ++i){
    if( v[i]==v[i+1])
    ctr++;
    if(ctr>max)
    max=ctr;

}
ctr=1;

for(int i =0; i < v.size()-1; ++i)
{
    if( v[i]== v[i+1])
    ctr++;
    if( max == ctr )
    cout<< max <<" "<< v[i];
}
}