class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            s = set()
            for j in range(9):
                e = board[i][j]
                if(e=='.'):continue
                if e in s:
                    return False
                s.add(e)
        for j in range(9):
            s = set()
            for i in range(9):
                e = board[i][j]
                if(e=='.'):continue
                if e in s:
                    return False
                s.add(e)
        for i in [0,1,2]:
            for j in [0,1,2]:
                s = set()
                for ii in [0,1,2]:
                    for jj in [0,1,2]:
                        e = board[3*i+ii][3*j+jj]
                        if(e=='.'):continue
                        if e in s:
                            return False
                        s.add(e)
        return True

            
        