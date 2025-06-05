class Solution {
  public:
    vector<int> createLps(string& s){
        int siz=s.length();
        vector<int> lps(siz);
        lps[0]=0;
        for(int i=1;i<siz;i++){
            int x=lps[i-1];
            while(s[i]!=s[x]){
                if(x==0){
                    x=-1;
                    break;
                }
                x=lps[x-1];
            }
            lps[i]=x+1;
        }
        return lps;
    }
    vector<int> search(string& pat, string& txt) {
        // code here
        int siz1=pat.length();
        pat=pat+'@';
        vector<int> ans;
        vector<int> lpspat=createLps(pat);
        int x=0;
        int siz=txt.length();
        for(int i=0;i<siz;i++){
            while(txt[i]!=pat[x]){
                if(x==0){
                    x=-1;
                    break;
                }
                x=lpspat[x-1];
            }
            x=x+1;
            if(x==siz1){
                ans.push_back(i-siz1+1);
            }
        }
        return ans;
    }
};