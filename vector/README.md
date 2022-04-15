# custom::vec&lt;T&gt;

---

## Member variables
- unsigned int size = number of elements in the container
- unsigned int capacity = number of elements that cna be stored without reallocation of the container
- template type array of size capacity
- iterator to element type T (child class)

---

## Member functions
- constructor, 3 types:
  -  (), empty container
  -  (n), size = n, default values
  -  (n, t), size = n, each of value t
- destructor
- operator= ==> deep copy
- begin ==> iterator to first element
- end ==> iterator to one past last element
- size ==> number of elements in the container
- resize, 2 types (change capacity as seen fit):
  - (n), only keep the first n entries and destroy the rest
  - (n,t), only keep first n entries and changes their values to t
- capacity ==> number of elements that can currently fit in the container
- empty ==> if size == 0
- operator[] ==> access element at index (does bound checks)
- front ==> first element
- back ==> last element
- push_back ==> push element at the end of the container
- push_front ==> push index as the first element int he container
- pop_back ==> delete last element and return its value
- pop_front ==> delete first element and return its value
- insert(p, val) ==> insert val at position p (checks for bounds, cannot be beyond iterator end)
- replace(p, val) ==> replaces value val at position p (checks for bounds)

