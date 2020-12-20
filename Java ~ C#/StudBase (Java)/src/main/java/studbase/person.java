/**
 * @date 11.11.2020
 * @author Vlad Suptelia
 * @index 1
 * @task абстрактный класс; наследование; параметры; БД . . .
 * @note имеет "подкласс" AddressField, используется для student и teacher;
 * @todo заменить void функции вывода на функции с возвращением значений
 */

package studbase;


public abstract class person {
    
    public String name;
    public String getName() { return this.name; }
    public void setName(String name) { this.name = name; }
    
    public int age;
    public int getAge() { return this.age; }
    public void setAge(int age) { this.age = age; }
    
    public AddressField address;
    public AddressField getAddress() { return this.address; }
    public void setAddress(AddressField address) { this.address = address; }
    
    protected person(String name, int age, AddressField address) {
        this.name = name;
        this.age = age;
        this.address = address;
    }
    
    protected person() {
        this.name = "name_placeholder";
        this.age = 0;
        address = new AddressField();
    }
    
    public void printInfo() {
        System.out.format("Имя: %s%n Возраст: %d%n", name, age);
        address.printAddress();
    }
    
}
