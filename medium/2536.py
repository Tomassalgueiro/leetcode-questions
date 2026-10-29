# create an n sized matrix
# we need to take the queries, they give [a,b,c,d], top, left, bottom, right coordinates for
# where to sum everything, i hope this is understandable
def rangeAddQueries(n: int, queries: list[list[int]]) -> list[list[int]]:

    mat = [[0 for _ in range(n)] for _ in range(n)] 
#    print("Initial mat: ", end="")
#    print(mat)
    i = 0
    while i < len(queries):
        top,left,bottom,right = queries[i]
#        print("Query: ", top, " ", left, " ", bottom, " ", right)

        for j in range (top, bottom+1):
            for k in range (left, right+1):
                mat[j][k] = mat[j][k] + 1

#        print("First query: ", end="")
#        print(mat)

        i += 1

    return mat

print("Result: ", end="")
print(rangeAddQueries(3,[[1,1,2,2],[0,0,1,1]]))
