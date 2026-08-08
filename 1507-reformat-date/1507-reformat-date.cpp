class Solution {
public:
    string reformatDate(string date) {
        string s ="";
        string m;
        if(date.size()==13){
        for(int i = 9; i<date.size(); i++)
        {
            s+=date[i];
        }
        s+='-';
        m ="";
        for(int i = 5; i<8; i++)
        {
            m+=date[i];
        }
        if(m=="Jan")
        {
            s+='0';
            s+='1';
        }
        else if(m=="Feb")
        {
            s+='0';
            s+='2';
        }
        else if(m=="Mar")
        {
            s+='0';
            s+='3';
        }
        else if(m=="Apr")
        {
            s+='0';
            s+='4';
        }
        else if(m=="May")
        {
            s+='0';
            s+='5';
        }
        else if(m=="Jun")
        {
            s+='0';
            s+='6';
        }
        else if(m=="Jul")
        {
            s+='0';
            s+='7';
        }
        else if(m=="Aug")
        {
            s+='0';
            s+='8';
        }
        else if(m=="Sep")
        {
            s+='0';
            s+='9';
        }
        else if(m=="Oct")
        {
            s+='1';
            s+='0';
        }
        else if(m=="Nov")
        {
            s+='1';
            s+='1';
        }
        else if(m=="Dec")
        {
            s+='1';
            s+='2';
        }
        s+='-';
        for(int i = 0 ; i <2; i++)
        {
            s+=date[i];
        }
        }
        else if(date.size()==12){
        for(int i = 8; i<date.size(); i++)
        {
            s+=date[i];
        }
        s+='-';
         m ="";
        for(int i = 4; i<7; i++)
        {
            m+=date[i];
        }
        if(m=="Jan")
        {
            s+='0';
            s+='1';
        }
        else if(m=="Feb")
        {
            s+='0';
            s+='2';
        }
        else if(m=="Mar")
        {
            s+='0';
            s+='3';
        }
        else if(m=="Apr")
        {
            s+='0';
            s+='4';
        }
        else if(m=="May")
        {
            s+='0';
            s+='5';
        }
        else if(m=="Jun")
        {
            s+='0';
            s+='6';
        }
        else if(m=="Jul")
        {
            s+='0';
            s+='7';
        }
        else if(m=="Aug")
        {
            s+='0';
            s+='8';
        }
        else if(m=="Sep")
        {
            s+='0';
            s+='9';
        }
        else if(m=="Oct")
        {
            s+='1';
            s+='0';
        }
        else if(m=="Nov")
        {
            s+='1';
            s+='1';
        }
        else if(m=="Dec")
        {
            s+='1';
            s+='2';
        }
        s+='-';
        s+='0';
        for(int i = 0 ; i <1; i++)
        {
            s+=date[i];
        }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna