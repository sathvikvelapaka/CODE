import java.util.*;

class ABC_Bank {
    String branchName = "Medchal";
    String IFSC_Code = "ABCD1234H";
    private int totalFunds = 6798139;

    private int accountNumber;
    private String accountHolderName;
    private double balance;
    private int UPIPin;
    private boolean enabledUPI;
    private List<String> passBook = new ArrayList<>();
    private String panCard;
    private long phoneNo;

    // Constructor
    ABC_Bank() {
        System.out.println("Dear customer!! Welcome to ABC Bank");
    }

    // Generate random account number
    int generateAccNo() {
        Random r = new Random();
        return 1000000 + r.nextInt(9000000); // generates a 7-digit account number
    }

    // Create Account
    void createAccount(String name, long phNo, String pan, int amount) {
        this.accountNumber = generateAccNo();
        this.accountHolderName = name;
        this.balance = amount;
        this.UPIPin = -1;
        this.enabledUPI = false;
        this.passBook.add(amount + " is credited");
        this.panCard = pan;
        this.phoneNo = phNo;
        System.out.println("Dear " + name + ", your account has been successfully created in ABC Bank.");
    }

    // Display account info
    void displayAccountInfo() {
        System.out.println("----- Account Info -----");
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Holder Name: " + accountHolderName);
        System.out.println("Phone Number: " + phoneNo);
        System.out.println("PAN: " + panCard);
        System.out.println("Balance: ₹" + balance);
        System.out.println("Branch: " + branchName + " | IFSC: " + IFSC_Code);
        System.out.println("------------------------");
    }
}

public class abcd7 {
    public static void main(String[] args) {
        // Create bank object
        ABC_Bank customer1 = new ABC_Bank();

        // Create account for customer
        customer1.createAccount("Sathvik", 9876543210L, "ABCDE1234F", 5000);

        // Display account info
        customer1.displayAccountInfo();
    }
}