class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int sequence = 0;
        for(int i = 0; i < data.size(); i++) {
            if(!sequence) {
                if((data[i] >> 7) == 0)
                    sequence = 0;
                else if((data[i] >> 5) == 6) 
                   sequence = 1;
                else if((data[i] >> 4) == 14)
                    sequence = 2;
                else if((data[i] >> 3) == 30)
                    sequence = 3;
                else
                    return 0;
            }
            else
            {
                if((data[i] >> 6) == 2)
                    sequence--;
                else
                    return 0;
            }   
        }
        if(sequence != 0)
            return 0;
        else
            return 1;
    }

};