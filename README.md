# Factory Method

* Factory Method one of the Creational Design Patterns.
* Provides an interface to create objects.

## Created Objects

* Objects that are created from factory are called as **products**.
* Products are concrete subclass and alter the methods. 

## Projects Example

* In this project we have a **Transportation** class which can be used for delivery. **Ship** and **Truck** classes are subclasses derived from **Transportation**.
* **TransportationFactory** is the factory class **produces** trucks and ships which can **deliver()** in their own way.
* Dictonary definition subclasses **alter** the virtual method from it's own superclass.

## Bonus Content
* Unique Pointer has been used for memory management.
* **Transportation** has a static container named **transportations_** which holds all transportation products.
* Transportation **desctructor** deletes products pointer from collection with iterator and C++17 style if condition has been used. 

