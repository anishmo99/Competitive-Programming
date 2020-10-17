def solution(xs):
    sort_ele = list(filter(lambda x: (x != 0), xs))
    sort_ele = sorted(sort_ele)
    neg_ele = list(filter(lambda x: (x < 0), sort_ele))
    pos_ele = list(filter(lambda x: (x > 1), sort_ele))
    neg_count = len(neg_ele)
    pos_count = len(pos_ele)
    max_pos_prod = max_neg_prod1 = max_neg_prod2 = 1
    for i in pos_ele:
        max_pos_prod *= i
    if neg_count % 2 == 0:
        for i in neg_ele:
            max_neg_prod1 *= i
    if neg_count == 1 and pos_count == 0:
        max_neg_prod2 = int(neg_ele[0])
    elif neg_count % 2 > 0:
        del neg_ele[-1]
        for i in neg_ele:
            max_neg_prod2 *= i

    maxprod = max_neg_prod1 * max_neg_prod2 * max_pos_prod
    if xs[0] == 0:
        maxprod = 0
    return (str(maxprod))
