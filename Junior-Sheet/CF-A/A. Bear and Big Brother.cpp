    /*Author : Abdallah Hemdan */ 
#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <assert.h>
#include <vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include<array>
#include<tuple>
#include <utility>
#include <functional>
#include <locale>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
typedef   long long int               ll ;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std ; 
int main(){
    int a , b ; 
    cin >> a >> b ; 
    int counter = 0 ; 
    while(a<=b){
        a*=3 ; 
        b*=2 ;
        counter++ ; 
    }
    cout << counter << endl ;
}
