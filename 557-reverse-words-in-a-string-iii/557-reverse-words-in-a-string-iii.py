class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        out = []
        lis = s.split(" ")
        for i in lis:
            out.append(i[::-1])
        
        out_str = ""
        for i in range(0, len(out)):
            out_str += out[i]
            if i != (len(out) - 1):
                out_str += " "
        return out_str
            