#include <iostream>
using namespace std;

class BDDNode{

public:
        int var;
        BDDNode* low;
        BDDNode* high;

        BDDNode(int v, BDDNode* l, BDDNode* h){
           this -> var = v;
           this ->low = l;
           this -> high = h;
        }
    };

    int main(){

        BDDNode* BDD_Zero = new BDDNode(-1,nullptr,nullptr);
        BDDNode* BDD_One = new BDDNode(-1,nullptr,nullptr);

        BDDNode* x2 = new BDDNode(2,BDD_Zero,BDD_One);

        BDDNode* x1 = new BDDNode(1,BDD_Zero,x2);

        int x1_val, x2_val;
        cout << "enter the x1 value (0/1) ";
        cin >> x1_val;
        cout << "enter the x2 value (0/1)";
        cin >> x2_val;

        BDDNode* current = x1;

        if(x1_val == 0)
            current = current -> low;
        else 
            current = current -> high;
        
        if(current -> var == -1){
            cout << "Result : " << (current == BDD_One ? 1 : 0) << endl;
            return 0;
        }


        if(x2_val == 0)
            current = current -> low;
        else
            current = current -> high;
        
            cout << "Result : " << (current == BDD_One ? 1: 0) << endl;

}