#!ruby

$count = 0

def dfs( pos, n )
  if n == 3
    $count += 1
    return
  end
  dfs( pos + 1, n+1 )
  dfs( pos - 1, n+1 )
end

dfs( 0, 0 )

puts $count
