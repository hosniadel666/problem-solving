class Solution(object):
    def countCharacters(self, words, chars):
        """
        :type words: List[str]
        :type chars: str
        :rtype: int
        """
        sum = 0
        for s in words:
            flag = True;
            for c in s:
                if chars.count(c) < s.count(c):
                    flag = False
            if flag:
                sum += len(s)
        
        return sum