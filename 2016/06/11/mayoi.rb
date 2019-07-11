#!ruby

$count = 0

def dfs( dir, pos, n )
  if( pos == 2 )
    return
  end
  if( pos == -2 )
    $count += 1
    return
  end
  dfs( dir, pos+dir, n )
  if( n > 0 )
    dfs( -dir, pos-dir, n-1)
  end
end

dfs( 1, 0, 40 )

puts $count
