class Solution(object):
    def buyChoco(self, prices, money):
        if len(prices) < 2:
            return money  

        prices.sort() 
        if money >= prices[0] + prices[1]:
            leftover = money - (prices[0] + prices[1])
            return leftover
        else:
            return money 
    