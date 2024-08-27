#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class sorts{
    private:
        void swap(int& a,int& b){
            int temp = a;
            a = b;
            b = temp;
        };
    public:
        void selectionSort(vector<int> ans){
            int m = ans.size();
            for(int i=0;i<m;i++){
                int min = i;
                for(int j=i+1;j<m;j++){
                    if(ans[j]<ans[min]){
                        min = j;
                    }
                }
                swap(ans[i],ans[min]);
            }
    };

};


int main(){
    vector<int> ans = {13,46,24,52,20,9};
    //the below object creation has automatic storage duration.
    sorts obj; //creating an object for this class - Instantiation
    obj.selectionSort(ans);

    //dynamic storage object
    // sorts* obj2 = new sorts();
    // obj2->selectionSort(ans);
    //for the above we have to delete the object after using it.
    // delete obj2;
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
};