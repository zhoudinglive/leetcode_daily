class Solution:
    def getImportance(self, employees, id):
        """
        :type employees: Employee
        :type id: int
        :rtype: int
        """ 
        self.sum = 0
        self.emp_dict = {}
        for e in employees:
            self.emp_dict[e.id] = (e.importance, e.subordinates)
        self.helper(id)
        return self.sum
    
    def helper(self, emp_id):
        self.sum += self.emp_dict[emp_id][0]
        for sub_emp in self.emp_dict[emp_id][1]:
            self.helper(sub_emp)




