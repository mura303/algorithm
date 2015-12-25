#!ruby

loop do

  n = gets.to_i
  break if n == -1
  a = []

  n.times do
    a << gets.to_i
  end

  sum = a.inject(:+)

  if sum % n == 0
    m = sum/n
    r = a.inject(0) do |acc,v|
      acc += (v-m).abs
    end
    puts r/2
  else
    puts -1
  end
    
end
