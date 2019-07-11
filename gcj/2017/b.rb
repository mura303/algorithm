#!ruby

n = gets.to_i

n.times do |case_id|
  num = gets.to_i
  num.downto 1 do |i|
    if i.to_s.bytes.sort.pack("c*") == i.to_s
      puts "Case ##{case_id+1}: #{i}"
      break
    end
  end
end
