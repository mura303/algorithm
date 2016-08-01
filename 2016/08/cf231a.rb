#!ruby
# http://codeforces.com/problemset/problem/231/A
n = gets.to_i

result = 0
n.times do
  if gets.split.count("1") >= 2
    result += 1
  end
end

puts result
