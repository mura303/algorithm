@input = [1,4,8,9,10]
@k = 170

def dfs(  depth, sum )
  if( depth == @input.length )
    return sum == @k
  end

  if( dfs(depth+1,sum+@input[depth]) )
    return true
  end

  if( dfs(depth+1,sum) )
    return true
  end

  return false

end

puts dfs(0,0)
