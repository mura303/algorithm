input = [1,4,8,9,10]
k = 17

def dfs( depth, sum ):
    if( depth == len(input) ):
        return sum == k

    if( dfs( depth+1, sum+input[depth] ) ):
        return True

    if( dfs( depth+1, sum ) ):
        return True

    return False

print dfs(0,0)
