class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        count=0
        for x in stones:
            if (x in jewels):
                count=count+1;
        return count
        
