class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d1 = {}
        d2 = {}
        for c in s:
            if d1.get(c):
                d1[c]+=1
            else:
                d1[c]=1
        for c in t:
            if d2.get(c):
                d2[c]+=1
            else:
                d2[c]=1
        for char ,count in d1.items():
            if not (d2.get(char) and d2[char]==d1[char]):
                #print("false")
                return False
        for char ,count in d2.items():
            if not (d1.get(char) and d1[char]==d2[char]):
                #print("false")
                return False
        print("true")
        return True
            