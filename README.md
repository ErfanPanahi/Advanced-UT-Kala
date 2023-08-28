# Advanced-UT-Kala
In this repository, the UT Kala project is being implemented with more advanced features and enhancements.

**Introduction:**

In the first phase, you implemented the roles of individuals, their addition to the system, and the relationships between users using dynamic memory and structures. In this phase of the project, you need to add additional components to your initial implementation and modify the necessary parts. These changes include implementing lists using linked lists, storing information in files, and searching and sorting items. All the instructions from the first phase should be executable correctly in this phase as well.

Project Explanation and Desired Features:

In this phase of the project, similar to the previous phase, you must implement the requested features in the command-line environment. Note that after successfully executing each of the following commands, display an appropriate message to the user. In case of errors, inform the user about the encountered error with a suitable message.

**Section 1:** Storing Information in Files

All the information of the store, including user profiles and items, should be stored in one or more files. Upon running the program, the previous information (if available) should be read from the file(s), and then the inputs should be taken from the command line.

Therefore, after ending the program and restarting it, no data should be lost or changed, and the program must resume from the same state in which it concluded.

**Guidance:**
You can store user and goods information separately in files named "users.txt" and "goods.txt," respectively.
In this section, we provide a general explanation of how to store user information in the "users.txt" file.
Store the information related to each user on a separate line in this file, and within each line, separate different sections of information using a special delimiter character, such as 5 comma characters. For example, if we have two users named "first" and "second," the contents of the file might look like this:
```
first,first_pass,first_role,...
second,second_pass,second_role,...
```
Here, "..." represents other user-related information that needs to be stored. In this example, we used a comma as the delimiter character. Any other character can be used as a delimiter, provided that it is not used within any section of the actual information.
Similarly, you can use a similar approach for storing goods.

**Section 2:** Linked Lists

1. Using Linked Lists:
In this phase of the project, you need to implement all the dynamic arrays used to store user and goods data using linked lists. Therefore, required operations on lists (such as deleting or searching for a user or item, as explained later) should be possible on linked lists.

**Using Binary Search Tree (7 points)**

User and product information in linked lists can be stored in sorted order. This approach increases the speed of sorting and searching in the list. Store the lists of users and products in a binary search tree based on their names and perform insertion, deletion, and search operations using this tree.

**Section 3: New Commands**

**1. Removing a Product:**
A seller can remove their product from the store using the following command:
```
remove_goods goods_name
```
Example: `remove_goods watch`

By removing a product, all related information, including the recorded ratings for that product, will be lost. In case of any errors, such as an incorrect product name, an appropriate message should be printed.

**2. Changing Product Prices:**
A user registered with the seller role in the system can change the prices of items. To do this, after logging into their seller account, they should first enter the desired command and then provide the name of the product and its new price in the following format:
```
change_goods_price <goods_name> <new_price>
```
Example: `change_goods_price watch 50000`

If the user does not have a product with the entered name, they should encounter an error message.

**3. Rating Products:**
Every user can give a rating to products they have purchased only once.

---

Please note that translating technical terms directly might not result in the most accurate and natural translation. If this text is part of a technical document or user interface, it's a good idea to consult with someone who is proficient in both languages and familiar with the specific domain to ensure the translation is accurate and clear.

The score must be an integer between 1 and 5. The scoring is done as follows:
```
rate_goods <goods_name> <seller_username> <rating>
Example: rate_goods watch third_person 3
```
In case of any errors, including duplicate ratings, incorrect goods or seller names, etc., an appropriate message should be printed.

Disabling low-rated goods:
If the average rating of a specific product by certain sellers becomes less than 2 (given that at least 5 buyers have rated it), that seller cannot sell the mentioned product anymore. If a customer requests to buy it, the desired item should be considered unavailable. If the number of buyers who have rated an item is less than 5, that item will not be disabled.

Reactivation of goods:
If the average rating of a previously disabled product becomes greater than or equal to 2 due to ratings from previous buyers who haven't yet rated it, the item returns to normal state. It can be sold again until its rating drops below 2.

Viewing available goods:
Every user must be able to view information about all available items for sale in the system by entering a command like the example provided. The information includes:
- Seller's name
- Goods' name
- Unit price of goods
- Goods' quantity in stock
- Average ratings of goods
Note: Goods should be sorted alphabetically by name.

Example: `show_goods`

Searching for goods:
Users can search and view available goods based on one or more specific attributes. The command format is as follows:
```
search <number_of_conditions>
<goods_attribute> <attribute_value>
…
```
In the first line, enter the command name followed by the number of attributes being searched. Then, for each condition, enter a pair of strings for the attribute name and its value, separated by a space. Accepted strings for `goods_attribute` are `name`, `min_price`, `max_price`, and `seller_username`. Finally, all goods that match the specified attributes will be displayed along with the details mentioned in section 5.

Note: Goods should be sorted alphabetically by name.

Sample input:
```
Example: search 2
name watch
min_price 10000
```
