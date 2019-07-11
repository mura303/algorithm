#!ruby

@num,  @maxweight = gets.split.map{|e| e.to_i}
@values = []
@weights = []

@num.times do
  v, w = gets.split.map{|e| e.to_i}
  @values << v
  @weights << w
end

def rec( ci, cw )
  res = nil
  if( ci == @num )
    res = 0
  elsif cw < @weights[ci]
    res = rec( ci+1, cw )
  else
    res = [rec(ci+1,cw), rec(ci+1, cw-@weights[ci]) + @values[ci] ].max;
  end

  return res
  
end
 
puts rec(0,@maxweight)
