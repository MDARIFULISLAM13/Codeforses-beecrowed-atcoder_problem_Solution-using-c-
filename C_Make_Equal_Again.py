def min_cost_to_equalize(a):
    n = len(a)

    # Count the frequency of each element
    freq = [0] * (n + 1)
    for i in range(n):
        freq[a[i]] += 1

    most_frequent = freq.index(max(freq))
    second_most_frequent = max(range(len(freq)), key=lambda x: freq[x] if x != most_frequent else -1)

    # Calculate the cost of making all elements equal to the most frequent element
    cost_most_frequent = n - freq[most_frequent]

    # Calculate the cost of making all elements equal to the second most frequent element
    cost_second_most_frequent = n - freq[second_most_frequent]

    # Find the minimum cost
    min_cost = min(cost_most_frequent, cost_second_most_frequent)

    return min_cost

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        result = min_cost_to_equalize(a)
        print(result)

if __name__ == "__main__":
    main()
def min_cost_to_equalize(a):
    n = len(a)

    # Count the frequency of each element
    freq = [0] * (n + 1)
    for i in range(n):
        freq[a[i]] += 1

    most_frequent = freq.index(max(freq))
    second_most_frequent = max(range(len(freq)), key=lambda x: freq[x] if x != most_frequent else -1)

    # Calculate the cost of making all elements equal to the most frequent element
    cost_most_frequent = n - freq[most_frequent]

    # Calculate the cost of making all elements equal to the second most frequent element
    cost_second_most_frequent = n - freq[second_most_frequent]

    # Find the minimum cost
    min_cost = min(cost_most_frequent, cost_second_most_frequent)

    return min_cost

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        result = min_cost_to_equalize(a)
        print(result)

if __name__ == "__main__":
    main()
def min_cost_to_equalize(a):
    n = len(a)

    # Count the frequency of each element
    freq = [0] * (n + 1)
    for i in range(n):
        freq[a[i]] += 1

    most_frequent = freq.index(max(freq))
    second_most_frequent = max(range(len(freq)), key=lambda x: freq[x] if x != most_frequent else -1)

    # Calculate the cost of making all elements equal to the most frequent element
    cost_most_frequent = n - freq[most_frequent]

    # Calculate the cost of making all elements equal to the second most frequent element
    cost_second_most_frequent = n - freq[second_most_frequent]

    # Find the minimum cost
    min_cost = min(cost_most_frequent, cost_second_most_frequent)

    return min_cost

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        result = min_cost_to_equalize(a)
        print(result)

if __name__ == "__main__":
    main()
def min_cost_to_equalize(a):
    n = len(a)

    # Count the frequency of each element
    freq = [0] * (n + 1)
    for i in range(n):
        freq[a[i]] += 1

    most_frequent = freq.index(max(freq))
    second_most_frequent = max(range(len(freq)), key=lambda x: freq[x] if x != most_frequent else -1)

    # Calculate the cost of making all elements equal to the most frequent element
    cost_most_frequent = n - freq[most_frequent]

    # Calculate the cost of making all elements equal to the second most frequent element
    cost_second_most_frequent = n - freq[second_most_frequent]

    # Find the minimum cost
    min_cost = min(cost_most_frequent, cost_second_most_frequent)

    return min_cost

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        result = min_cost_to_equalize(a)
        print(result)

if __name__ == "__main__":
    main()
