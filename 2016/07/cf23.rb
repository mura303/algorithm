#!ruby

n, m, a = gets.split.map{|e|e.to_i}
puts ( (n-1)/a + 1 ) * ( (m-1)/a + 1 )
