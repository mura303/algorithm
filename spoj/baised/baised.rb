tn = gets.to_i

tn.times do
	gets
	n = gets.to_i
	a = []
	n.times do
		a << gets.split[1].to_i
	end
  puts	a.sort.inject([1,0]){|m,e| [ m[0]+1, m[1] + (m[0]-e).abs ] }[1]
end
