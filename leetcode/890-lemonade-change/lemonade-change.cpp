class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int tens = 0;
        int twen = 0;

        

        for(int i = 0; i<bills.size(); i++)
        {
            if(bills[i] == 5)
            {
                five++;
            }
            else if(bills[i] == 10) 
            {
                tens++;
                if(five>=1)
                {
                    five--;
                }
                else    return false;
                
            }
            else if(bills[i] == 20)
            {
                twen++;
                if(tens>=1 && five>=1)
                {
                    tens--;
                    five--;
                }
                else if(tens == 0 && five>=3 )
                {
                    five-=3;
                }
                else    return false;
            }

        }
        return true;

    }
};