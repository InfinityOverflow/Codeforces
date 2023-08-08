#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)//i have see how to solve this problem with functions
int x(string &S)
{
   int index=0;
   set<char> countSet;
int substringCount = 1;
while (index < S.length())
{
    if( S[index] not in countSet)
    {
        countSet.add(S[index]);
        index+=1;
    }
    else
    {
        countSet = set();
        countSet.insert(S[index]);
        substringCount+=1;
        index+=1;
    }
}
return substringCount
}
int distinctSubstring(string& S)
{
    if(S == null || S.length() == 0) {
			return 0;
		}
		Set<Character> set = new HashSet<>();
		int count = 1;
		for(char c : S.toCharArray()) {
			if(!set.add(c)) {
				set.clear();
				set.add(c);
				count++;
			}
		}
		return count;
}
 
// Driver code
int main()
{
    string S = "abba";
    int N = S.length();
 
    cout << distinctSubstring(S, N);
 
    return 0;
}
int solution(string &s)
{
    unordered_set<string> HS;
    int n=s.length();
    for (int i = 0; i < n; ++i) 
    {
        vector<bool> freq(26, false);
        string z="";
        for (int j = i; j < n; ++j) 
        {
            int pos = s[j] - 'a';
            if (freq[pos] == true)
                break;
            freq[pos] = true;
            z += s[j];
            HS.insert(z);
        }
    }
 
    return HS.size();
}
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
      int m;
      cin>>m;
      vector <char> a;
      rep(i,0,m-1)
      {
         char r;
         a.push_back(r);
      }
      int counter=0;
      rep(i,0,m-1)
      {
         char r=a[i];
         if(r=='?')
         {
            rep(j,i+1,m-1)
            {
               char k=a[j];
               if(k=='?')
               {
                  continue;
               }
            }
         }
      }
   }
   return 0;
}
/*
 int counter = 0;

        for (int i = 0; i < X.length; i++) {
            int[] dpSum = new int[X.length];

            dpSum[i] = X[i];

            if (X[i] == S) {
                counter++;
            }

            for (int j = i + 1; j < X.length; j++) {
                int sum = dpSum[j - 1] + X[j];

                dpSum[j] = sum;

                if ((double) sum / (j - i + 1) == S) {
                    counter++;
                }
            }
        }
        return counter;
        }
