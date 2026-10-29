# create an n sized matrix
# we need to take the queries, they give [a,b,c,d], top, left, bottom, right coordinates for
# where to sum everything, i hope this is understandable
def rangeAddQueries(n: int, queries: list[list[int]]) -> list[list[int]]:

    diffMat = [[0 for _ in range(n+1)] for _ in range(n+1)]  
    i = 0

    while i < len(queries):
        top,left,bottom,right = queries[i]

        diffMat[top][left] += 1
        diffMat[top][right + 1] -= 1
        diffMat[bottom + 1][left] -= 1
        diffMat[bottom + 1][right + 1] += 1

        i += 1

    mat = [[0 for _ in range(n)] for _ in range(n)] 
    print(diffMat)

    for j in range(n):
            for k in range(n):
                if j > 0:
                    above = mat[j - 1][k]
                else:
                    above = 0

                if k > 0:
                    left_val = mat[j][k - 1]
                else:
                    left_val = 0

                if k > 0 and j > 0:
                    diagonal = mat[j - 1][k - 1]
                else:
                    diagonal = 0

                mat[j][k] = diffMat[j][k] + above + left_val - diagonal

    return mat

res = rangeAddQueries(3,[[1,1,2,2],[0,0,1,1]])
print(res)
