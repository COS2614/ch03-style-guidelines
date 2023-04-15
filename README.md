# ch03-style-guidelines

This example demonstrates the use of Qt style guidelines and naming conventions as outlined in section 3.1 of the provided text.

## Naming Conventions
- Class names begin with a capital letter: Customer
- Function names begin with a lowercase letter: name(), setName(), main()
- Constants are capitalized and created, preferably, as enum values in a class scope. Global constants and macros are usually all CAPS: CUSTOMER_NAME, APP_TITLE, APP_VERSION, PI
- Each class name should be a noun or a noun phrase: Customer
- Each function name should be a verb or a verb phrase: name(), setName()
- Each bool variable name should produce a reasonable approximation of a sentence when used in an if() statement: isQualified

## Style Guidelines
- Names are sequences of letters and numerical digits, the first of which must not be a digit
- The underscore character ( _ ) can be used also, but we discourage the use of that character except for class data members
- Use CamelCase to form multi-word names by joining the words together and capitalizing the interior word beginnings; e.g., CustomerName, getCustomerInfo()
- Each class name should be a noun or a noun phrase: Customer
- Each function name should be a verb or a verb phrase: name(), setName()
- Each bool variable name should produce a reasonable approximation of a sentence when used in an if() statement: isQualified
- Modified Hungarian notation for data members: m_name
- Setter function names should be prefixed with set: setName()
- Non-boolean getters: name()
- Boolean getters: isQualified()
- Global constants and macros are usually all CAPS: APP_TITLE, APP_VERSION, PI
- Each class name should be a noun or a noun phrase: Customer
- Each function name should be a verb or a verb phrase: name(), setName()
- Each bool variable name should produce a reasonable approximation of a sentence when used in an if() statement: isQualified

The example also demonstrates how to use a QApplication instance to initialize a Qt application and create a QLabel widget to display a simple message. The program also uses a Customer class to illustrate how to define a class that follows the Qt style guidelines and naming conventions for data members, setters, and getters. Finally, the example demonstrates how to define and use constants and enums following the Qt coding standard for naming conventions.
