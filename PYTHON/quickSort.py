def Partition(lb, ub, Ar):
    pivot_index = lb
    pivot = Ar[pivot_index]
    st = lb
    end = ub
    while st < end:
        while Ar[st] <= pivot and st < len(Ar)-1:
            st += 1
        while Ar[end] > pivot:
            end -= 1
        if st < end:
            Ar[st], Ar[end] = Ar[end], Ar[st]
    Ar[end], Ar[lb] = Ar[lb], Ar[end]
    return end


def QuickSort(lb, ub, Ar):
    if lb < ub:
        pos = Partition(lb, ub, Ar)
        QuickSort(lb, pos - 1, Ar)
        QuickSort(pos + 1, ub, Ar)


ch = 'Y'
while ch == 'Y' or ch == 'y':
    Ar = []
    n = int(input("Please enter the number of terms.\nTerms: "))
    if n <= 0:
        print("List doesn't contain any terms.")
    else:
        print("Please enter the elements.")
        for i in range(n):
            num = int(input("Element: "))
            Ar.append(num)
        print("\nUnsorted Array: ", Ar)
        QuickSort(0, n-1, Ar)
        print("\nSorted Array: ", Ar)
    ch = input("\nDo you want to continue? (Y/N)\n")