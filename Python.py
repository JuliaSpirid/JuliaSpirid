class Donkey:
    def _init_(self, name, weight, age):
        self.name = name
        self.weight = weight
        self.age = age
    def _str_(self):
        return 'Donkey-boy '+self.name+', '+str(self.weight)
    def cry(self):
        return 'Eeyore'*self.age
    def work_hard(self, amount):
        if amount >= 0:
            while amount - 5 >= 0 and self.age > 0:
                self.age -= 1
                amount -= 5
        else:
            self.age +=2
    def carry(self, load):
        if load <= self.weight:
            return True
        else:
            return False

