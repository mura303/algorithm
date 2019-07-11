#!ruby

inputnum = gets.to_i

inputnum.times do |case_id|

  (s, k_str) = gets.split
  k = k_str.to_i

  count = 0
  result = nil

  (s.length-k+1).times do |i|
    if s[i] == ?-
      count += 1           
      k.times do |j|
        if s[i+j] == ?-
          s[i+j] = ?+
        else
          s[i+j] = ?-
        end
       end
    end
  end

  if s.index(?-)
    result = "IMPOSSIBLE"
  else
    result = count.to_s
  end

  puts "Case ##{case_id+1}: #{result}"

end
