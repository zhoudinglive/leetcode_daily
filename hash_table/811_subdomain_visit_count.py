class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        hash_set = {}

        domains = [dom.split(' ') for dom in cpdomains]
        for dom in domains:
            num = int(dom[0])

            sub_dom = dom[1].split('.')
            dom_len = len(sub_dom)
            for i in range(dom_len):
                now_dom = sub_dom[i] 
                # if i + 1 != dom_len else '.' + sub_dom[i]
                for j in range(i+1, dom_len):
                    now_dom += '.' + sub_dom[j]
                if now_dom in hash_set:
                    hash_set[now_dom] += num
                else:
                    hash_set[now_dom] = num
        
        ans = [str(value) + ' ' + key for key, value in hash_set.items()]
        return ans 
