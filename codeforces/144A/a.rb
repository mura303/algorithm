#!ruby

n = gets.to_i

data = gets.split.map{|e|e.to_i}

max_num = data.max
min_num = data.min
max_index = data.index(max_num)
min_index = data.rindex(min_num)

puts max_index + data.length - min_index  -1+ (max_index>min_index ? -1 :  0 )
