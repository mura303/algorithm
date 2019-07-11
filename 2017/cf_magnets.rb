#!ruby

n = gets.to_i

prev_line = gets

count = 1

while line = gets
  count += 1 if line != prev_line
  prev_line = line
end

puts count


