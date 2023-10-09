/* algoritmo de PD correspondente ao problema da LIS*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int tam = s.length(); 
        int dp[tam];
        int listmax=0;
        for(int i=0;i<tam;i++){
            dp[i] = 1;
            for (int j=0;j<i;j++){
                if (s[j]<s[i]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            listmax = max(listmax,dp[i]);
            printf("%c ",s[i]); imprime(dp,i);
        }
        return listmax;
        }

        int max(int x,int y){
            if (x>y)
                return x;
            else 
                return y;
        }

        void imprime(int vet[],int tam){
            printf("[");
            for(int i=0;i<=tam;i++){
                if (i!=tam){
                printf("%d, ",vet[i]);
                }
                else {
                    printf("%d]\n",vet[i]);
                }
            }
        }
};
