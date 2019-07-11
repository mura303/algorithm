#!ruby

INF = 999999

coins = []

dp = Array.new( 100000, INF )

yen, denom = gets.split.map{|e| e.to_i}

denom.times do
  c = gets.to_i
  coins << c
end

dp[0] = 0

(0..yen).each do |i|
  coins.each do |c|
    if( i >= c )
      dp[i] = [ dp[i], dp[i-c]+1 ].min
    end
  end
end

puts dp[yen]

      
