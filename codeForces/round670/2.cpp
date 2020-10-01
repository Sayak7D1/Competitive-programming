#include<bits/stdc++.h>
using namespace std;
int problem(vector<int> pos,vector<int> neg);
int main()
{
    int t;
    cin >> t;
    for(t;t>0;t--){
        int n;
        cin >> n;
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            if(temp >= 0)
            {
                pos.push_back(temp);
            }else{
                neg.push_back(temp);
            }
        }
        cout<<problem(pos,neg)<<'\n';
    }
    return 0;
}
int problem(vector<int> posve,vector<int> negve){
    sort(posve.begin(),posve.end());
    sort(negve.begin(),negve.end());
    auto pos = posve.rbegin();
    auto neg = negve.cbegin();
    int ans = 1;
    //cout << *pos <<" "<< *neg<<'\n';
    int sizeN = negve.size();
    if(posve.size() == 0){
        auto temp = negve.rbegin();
        for(int i=0;i<5;i++){
            ans *= (*temp); temp++;
        }
        //return ((*temp) * (*temp+1) * (*temp+2) * (*temp+3) * (*temp+4));
        return ans;
    }
    if(sizeN < 2){
        auto temp = posve.rbegin();
        for(int i=0;i<5;i++){
            ans *= (*temp); temp++;
        }

        //return ((*pos) * (*pos+1) * (*pos+2) * (*pos+3) * (*pos+4));
        return ans;
    }
    for(int i=1;i<=5;i++){
        if(-(*neg) >= *pos){
            if(i != 5 && sizeN > 1){
                ans *= (*neg); neg++;
                ans *= (*neg); neg++;
                sizeN--;
                i++;
            }else{
                ans*= (*pos);
            }
        }else{
            ans*= (*pos); pos++;
        }
       //cout << ans <<'\n';
    }
    return ans;
}
