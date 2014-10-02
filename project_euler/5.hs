lcmTillOne 1 = 1
lcmTillOne x
    | x <= 1 = 1
    | otherwise = lcm x (lcmTillOne (x - 1)) 
