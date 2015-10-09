class Solution {
public:
	void replaceSpace(char *str,int length) {
        int i = 0;
        for(i=0;i < length;i++)
        {
            if(*(str+i)==' ') 
            {
                length += 2;
                int j = length - 1;
                while(j-2 > i)
                {
                    *(str+j)=*(str+j-2);
                    j--;
                    
                }                   
                *(str+i) = '%';
                *(str+i+1) = '2';
                *(str+i+2) = '0';

            }
            
        }

	}
};
