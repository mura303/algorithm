@memo = {}

def fib(n)
  return @memo[n] if @memo[n]
  if( n == 0 || n == 1 )
    @memo[n] = 1
    return 1
  else
    r = fib(n-1) + fib(n-2)
    @memo[n] = r
    return r
  end
end

puts fib(gets.to_i)
