Step 1
The program starts with login page for administrator and customer users. Administrator information is already in database whereas customer inserts login 
information if it is new customer then signup page will appear with requirements of cell no and email id. If customer already exits he/she can view items 
and buy items which is followed by items selected to cart followed by billing confirmation and payment is made whereas in view items option customer can
 check for the available items.
for administrator the login information is provided which is followed by administrator portal screen with following options
modify item: administrator can add item  to category , add stock or change price  to current existing item. Administrator can also delete item and offer 
discount on all items of category.
modify staff : administrator can add member or delete member. 
modify category :administrator can add new category or delete category
generate sales report: administrator can view sales report for required duration.
view stock: current stock with items name and quantity.
generate profit report : administrator can view sales history with profit earned with respect to each item.
promote member: if administrator wants to make a customer a member .
Customer and administrator can logout at any moment which is followed to login screen


Step 2

We have used observer design pattern in our project. The item class is the observer and category is subject. Whenever the function 
delete_category/discount_on_category is called the items of that particular category update themselves accordingly. The admin calls the 
function delete_category/discount_on_category. 

