"""
    Authors Name : Abhishek Dobliyal
    Date Modified: 02 October, 2022
"""

# A simple implementation of Huffman Coding in Python
from heapq import *
from collections import Counter

s = "Hello Huffman"

def huffman_coding(s):
    freq = Counter(s)

    heap = [[f, [char, ""]] for f, char in freq.items()]
    heapify(heap)

    while len(heap) > 1:
        right = heappop(heap) # 0
        left = heappop(heap) # 1

        for pair in right[1:]:
            pair[1] = '0' + pair[1]
        for pair in left[1:]:
            pair[1] = '1' + pair[1]

        heappush(heap, ([right[0] + left[0]] + right[1:] + left[1:]))

    return heap

print(huffman_coding(s))
