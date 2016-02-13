#!ruby

n, m = gets.split.map{|e| e.to_i}

def dfs( num, goal, count )

  if( num >= goal )
    return count + num - goal
  end

  return [dfs(num*2, goal, count+1), dfs(num-1, goal, count+1 )].min
    
end

puts dfs(n, m, 0 )
