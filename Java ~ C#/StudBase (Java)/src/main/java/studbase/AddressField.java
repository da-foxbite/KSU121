/**
 * @date 11.11.2020
 * @author Vlad Suptelia
 * @index null
 * @task абстрактный класс; наследование; параметры; БД . . .
 */

package studbase;

public class AddressField {
    
    public String country;
    public String getCountry() { return this.country; }
    public void setCountry(String country) { this.country = country; }
    
    public String region;
    public String getRegion() { return this.region; }
    public void setRegion(String region) { this.region = region; }
    
    public String city;
    public String getCity() { return this.city; }
    public void setCity(String city) { this.city = city; }
    
    public String street;
    public String getStreet() { return this.street; }
    public void setStreet(String street) { this.street = street; }   
    
    public int houseNum;
    public int getHouseNum() { return this.houseNum; }
    public void setHouseNum(int houseNum) { this.houseNum = houseNum; }
    
    public int flatNum;
    public int getFlatNum() { return this.flatNum; }
    public void setFlatNum(int flatNum) { this.flatNum = flatNum; }
    
    public int index;
    public int getIndex() { return this.index; }
    public void setIndex(int index) { this.index = index; }
    
    protected AddressField(String country, String region, String city, String street, int houseNum, int flatNum, int index) {
        this.country = country;
        this.region = region;
        this.city = city;
        this.street = street;
        this.houseNum = houseNum;
        this.flatNum = flatNum;
        this.index = index;
    }
    
    protected AddressField() {
        this.country = "Ukraine"; // country_placeholder
        this.region = "KS oblast"; // region_placeholder
        this.city = "Kherson"; // city_placeholder
        this.street = "street_placeholder";
        this.houseNum = 0;
        this.flatNum = 0;
        this.index = 0;
    }
    
    public void printAddress() {
        System.out.format("Адрес: %s, %s, %s%n%s, %d, %d%n%d", country, region, city, street, houseNum, flatNum, index);
    }
}
